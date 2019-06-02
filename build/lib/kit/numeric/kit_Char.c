#include "main.h"

char kit_numeric_Char__maxValue()
{
    return SCHAR_MAX;
}

char kit_numeric_Char__capitalize(char * __this)
{
    if (*__this >= (char) 97 && *__this <= (char) 122)
    {
        return *__this + (char) 65 - (char) 97;
    }
    else
    {
        return *__this;
    }
}

char kit_numeric_Char__minValue()
{
    return SCHAR_MIN;
}
