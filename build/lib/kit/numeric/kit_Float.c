#include "main.h"

float kit_numeric_Float_b55baf3288b35f4f8a65e193__maxValue()
{
    {
        return FLT_MAX;
    }
}

double kit_numeric_Float_b1a3e32904dae9ff4b710d1e__minValue()
{
    if ((int) 64 == (int) 64)
    {
        return DBL_MIN;
    }
    else
    {
        kit_utils__panic((char *) "invalid float width!");
    }
}

double kit_numeric_Float_b1a3e32904dae9ff4b710d1e__maxValue()
{
    if ((int) 64 == (int) 64)
    {
        return DBL_MAX;
    }
    else
    {
        kit_utils__panic((char *) "invalid float width!");
    }
}

float kit_numeric_Float_b55baf3288b35f4f8a65e193__minValue()
{
    {
        return FLT_MIN;
    }
}
