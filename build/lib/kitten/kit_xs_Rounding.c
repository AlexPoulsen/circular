#include "main.h"

int32_t kitten_xs_Rounding__xs_CeilToInt(double val, double dme)
{
    return kitten_xs_Rounding__xs_CRoundToInt(val + dme,
                                              kitten_xs_Rounding__xs_doublemagic);
}

int32_t kitten_xs_Rounding__xs_FloorToInt(double val, double dme)
{
    return kitten_xs_Rounding__xs_CRoundToInt(val - dme,
                                              kitten_xs_Rounding__xs_doublemagic);
}

int32_t kitten_xs_Rounding__xs_ToInt(double val, double dme)
{
    if (val < (double) 0)
    {
        return kitten_xs_Rounding__xs_CRoundToInt(val - dme,
                                                  kitten_xs_Rounding__xs_doublemagic);
    }
    else
    {
        return kitten_xs_Rounding__xs_CRoundToInt(val + dme,
                                                  kitten_xs_Rounding__xs_doublemagic);
    }
}

int32_t kitten_xs_Rounding__xs_CRoundToInt(double val, double dmr)
{
    val = val + dmr;
    return ((int32_t *) &val)[kitten_xs_Rounding__xs_iman];
}

int32_t kitten_xs_Rounding__xs_ConvertToFixed(double val,
                                              int digits)
{
    return kitten_xs_Rounding__xs_CRoundToInt(val,
                                              kitten_xs_Rounding__xs_doublemagic / ((int) 1 << digits));
}

int kitten_xs_Rounding__xs_doubleisnegative(int a)
{
    return (&a)[kitten_xs_Rounding__xs_iexp] | (int64_t) 2147483648LL;
}

int32_t kitten_xs_Rounding__xs_doublecopysgn(int a, int b)
{
    return (&a)[kitten_xs_Rounding__xs_iexp] &= ~((&b)[kitten_xs_Rounding__xs_iexp] & (int64_t) 2147483648LL);
}

float kitten_xs_Rounding__xs_ClampFloat(float a, float b, float c)
{
    return kitten_xs_Rounding__xs_MinFloat(kitten_xs_Rounding__xs_MaxFloat(a,
                                                                           b),
                                           c);
}

float kitten_xs_Rounding__xs_MaxFloat(float a, float b)
{
    return a > b ? a : b;
}

float kitten_xs_Rounding__xs_MinFloat(float a, float b)
{
    return a < b ? a : b;
}

int kitten_xs_Rounding__xs_ClampInt(int a, int b, int c)
{
    return kitten_xs_Rounding__xs_MinInt(kitten_xs_Rounding__xs_MaxInt(a,
                                                                       b),
                                         c);
}

int kitten_xs_Rounding__xs_MaxInt(int a, int b)
{
    return a > b ? a : b;
}

int kitten_xs_Rounding__xs_MinInt(int a, int b)
{
    return a < b ? a : b;
}

char * kitten_xs_Rounding__endiannessString()
{
    if (kitten_xs_Rounding__endianness == kitten_xs_Rounding_Endianness__LITTLE)
    {
        return (char *) "little";
    }
    else if (kitten_xs_Rounding__endianness == kitten_xs_Rounding_Endianness__BIG)
    {
        return (char *) "big";
    }
    else if (kitten_xs_Rounding__endianness == kitten_xs_Rounding_Endianness__OTHER)
    {
        return (char *) "other";
    }
    return (char *) "enum match failed";
}

void kitten_xs_Rounding__checkEndianness()
{
    if (kitten_xs_Rounding__e.c[(int) 0] == (char) 4 && kitten_xs_Rounding__e.c[(int) 1] == (char) 3 && kitten_xs_Rounding__e.c[(int) 2] == (char) 2 && kitten_xs_Rounding__e.c[(int) 3] == (char) 1)
    {
        kitten_xs_Rounding__endianness = kitten_xs_Rounding_Endianness__LITTLE;
    }
    else if (kitten_xs_Rounding__e.c[(int) 0] == (char) 1 && kitten_xs_Rounding__e.c[(int) 1] == (char) 2 && kitten_xs_Rounding__e.c[(int) 2] == (char) 3 && kitten_xs_Rounding__e.c[(int) 3] == (char) 4)
    {
        kitten_xs_Rounding__endianness = kitten_xs_Rounding_Endianness__BIG;
    }
    if (kitten_xs_Rounding__endianness == kitten_xs_Rounding_Endianness__LITTLE)
    {
        kitten_xs_Rounding__xs_iexp = (int) 1;
        kitten_xs_Rounding__xs_iman = (int) 0;
    }
    else if (kitten_xs_Rounding__endianness == kitten_xs_Rounding_Endianness__BIG)
    {
        kitten_xs_Rounding__xs_iexp = (int) 0;
        kitten_xs_Rounding__xs_iman = (int) 1;
    }
    else if (kitten_xs_Rounding__endianness == kitten_xs_Rounding_Endianness__OTHER)
    {
        printf((char *) "WARN: Other endianness, behavior not defined. Setting iexp, iman to little endianness values.");
        kitten_xs_Rounding__xs_iexp = (int) 1;
        kitten_xs_Rounding__xs_iman = (int) 0;
    }
}

double kitten_xs_Rounding__xs_doublemagicroundeps;

double kitten_xs_Rounding__xs_doublemagicdelta;

double kitten_xs_Rounding__xs_doublemagic = 6755399441055744.0;

int kitten_xs_Rounding__xs_iman = (int) 0;

int kitten_xs_Rounding__xs_iexp = (int) 1;

enum kitten_xs_Rounding__Endianness kitten_xs_Rounding__endianness = kitten_xs_Rounding_Endianness__OTHER;

union kitten_xs_Rounding__EndianTest kitten_xs_Rounding__e;

int32_t kitten_xs_Rounding__xs_RoundToInt(double val)
{
    return kitten_xs_Rounding__xs_CRoundToInt(val + kitten_xs_Rounding__xs_doublemagicdelta,
                                              kitten_xs_Rounding__xs_doublemagic);
}
