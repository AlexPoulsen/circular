#include "main.h"

struct kitten_stringbuilder__StringBuilder kitten_stringbuilder_StringBuilder__newFromCopy(struct kitten_stringbuilder__StringBuilder initialize)
{
    char * newChars = malloc(initialize.allocated * sizeof(char));
    strcpy(newChars, initialize.chars);
    return (struct kitten_stringbuilder__StringBuilder) {.chars = newChars, .length = initialize.length, .allocated = initialize.allocated};
}

struct kitten_stringbuilder__StringBuilder kitten_stringbuilder_StringBuilder__newFromString(char * initialize,
                                                                                             int size)
{
    int initSize = kitten_stringbuilder___minSizePreDoubling;
    initSize = kitten_xs_Rounding__xs_MaxInt(strlen(initialize),
                                             initSize) * (int) 2;
    initSize = kitten_xs_Rounding__xs_MaxInt(size, initSize);
    char * initChars = malloc(initSize * sizeof(char));
    strcpy(initChars, initialize);
    return (struct kitten_stringbuilder__StringBuilder) {.chars = initChars, .length = strlen(initialize), .allocated = initSize};
}

struct kitten_stringbuilder__StringBuilder kitten_stringbuilder_StringBuilder__newFromCharPtr(char * initialize,
                                                                                              int size)
{
    int initSize = kitten_stringbuilder___minSizePreDoubling;
    initSize = kitten_xs_Rounding__xs_MaxInt(size, initSize) * (int) 2;
    char * initChars = malloc(initSize * sizeof(char));
    strcpy(initChars, initialize);
    return (struct kitten_stringbuilder__StringBuilder) {.chars = initChars, .length = size, .allocated = initSize};
}

struct kitten_stringbuilder__StringBuilder kitten_stringbuilder_StringBuilder__newFromCharArray(char initialize[],
                                                                                                int size)
{
    int initSize = kitten_stringbuilder___minSizePreDoubling;
    initSize = kitten_xs_Rounding__xs_MaxInt((int) 0,
                                             initSize) * (int) 2;
    initSize = kitten_xs_Rounding__xs_MaxInt(size, initSize);
    char * initChars = malloc(initSize * sizeof(char));
    strcpy(initChars, initialize);
    return (struct kitten_stringbuilder__StringBuilder) {.chars = initChars, .length = (int) 0, .allocated = initSize};
}

struct kitten_stringbuilder__StringBuilder kitten_stringbuilder_StringBuilder__newFromInt(int initialize,
                                                                                          int size)
{
    int numSize = kitten_xs_Rounding__xs_CeilToInt(log10(initialize),
                                                   kitten_xs_Rounding__xs_doublemagicroundeps);
    int initSize = kitten_stringbuilder___minSizePreDoubling;
    initSize = kitten_xs_Rounding__xs_MaxInt(numSize,
                                             initSize) * (int) 2;
    initSize = kitten_xs_Rounding__xs_MaxInt(size, initSize);
    char * initChars = malloc(initSize * sizeof(char));
    sprintf(initChars, (char *) "%d", initialize);
    return (struct kitten_stringbuilder__StringBuilder) {.chars = initChars, .length = numSize, .allocated = initSize};
}

struct kitten_stringbuilder__StringBuilder kitten_stringbuilder_StringBuilder__newFromFloat(float initialize,
                                                                                            int size)
{
    double initializeAboveDecimal = kitten_xs_Rounding__xs_FloorToInt(initialize,
                                                                      kitten_xs_Rounding__xs_doublemagicroundeps);
    int aboveDecimalSize = kitten_xs_Rounding__xs_CeilToInt(log10(initializeAboveDecimal),
                                                            kitten_xs_Rounding__xs_doublemagicroundeps) + (int) 1;
    if (size == (int) -1)
    {
        size = aboveDecimalSize;
    }
    int cacheSize = size;
    int initSize = kitten_stringbuilder___minSizePreDoubling;
    size = kitten_xs_Rounding__xs_MaxInt(aboveDecimalSize, size);
    initSize = kitten_xs_Rounding__xs_MaxInt(size + (int) 1,
                                             initSize) * (int) 2 + (int) 2;
    char * initChars = malloc((cacheSize * (int) 2 + (int) 1) * sizeof(char));
    char * initCharsTemp = malloc(initSize * sizeof(char));
    sprintf(initCharsTemp,
            (char *) "%.*f",
            kitten_xs_Rounding__xs_MaxInt(size - aboveDecimalSize - (int) 1,
                                          aboveDecimalSize),
            initialize);
    strncpy(initChars,
            (char *) "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000",
            cacheSize * (int) 2 + (int) 1);
    strncpy(initChars,
            initCharsTemp,
            kitten_xs_Rounding__xs_MaxInt(cacheSize - (int) 1, (int) 1));
    return (struct kitten_stringbuilder__StringBuilder) {.chars = initChars, .length = kitten_xs_Rounding__xs_MaxInt(cacheSize,
                                                                                                                     (int) 1), .allocated = cacheSize * (int) 2 + (int) 1};
}

struct kitten_stringbuilder__StringBuilder kitten_stringbuilder_StringBuilder__newFromBool(_Bool initialize,
                                                                                           enum kitten_stringbuilder__BoolMode mode,
                                                                                           enum kitten_stringbuilder__BoolCap capitalization,
                                                                                           int size)
{
    char * t = (char *) "-";
    char * f = (char *) "-";
    if (mode == kitten_stringbuilder_BoolMode__TRUE_FALSE)
    {
        if (capitalization == kitten_stringbuilder_BoolCap__LOWER)
        {
            t = (char *) "true";
            f = (char *) "false";
        }
        else if (capitalization == kitten_stringbuilder_BoolCap__UPPER)
        {
            t = (char *) "TRUE";
            f = (char *) "FALSE";
        }
        else if (capitalization == kitten_stringbuilder_BoolCap__TITLE)
        {
            t = (char *) "True";
            f = (char *) "False";
        }
    }
    else if (mode == kitten_stringbuilder_BoolMode__T_F)
    {
        if (capitalization == kitten_stringbuilder_BoolCap__LOWER)
        {
            t = (char *) "t";
            f = (char *) "f";
        }
        else if (capitalization == kitten_stringbuilder_BoolCap__UPPER)
        {
            t = (char *) "T";
            f = (char *) "F";
        }
        else if (capitalization == kitten_stringbuilder_BoolCap__TITLE)
        {
            t = (char *) "T";
            f = (char *) "F";
        }
    }
    else if (mode == kitten_stringbuilder_BoolMode__T1_F0)
    {
        t = (char *) "1";
        f = (char *) "0";
    }
    else if (mode == kitten_stringbuilder_BoolMode__ON_OFF)
    {
        if (capitalization == kitten_stringbuilder_BoolCap__LOWER)
        {
            t = (char *) "on";
            f = (char *) "off";
        }
        else if (capitalization == kitten_stringbuilder_BoolCap__UPPER)
        {
            t = (char *) "ON";
            f = (char *) "OFF";
        }
        else if (capitalization == kitten_stringbuilder_BoolCap__TITLE)
        {
            t = (char *) "On";
            f = (char *) "Off";
        }
    }
    return kitten_stringbuilder_StringBuilder__newFromString(initialize ? t : f,
                                                             size);
}

void kitten_stringbuilder_StringBuilder__appendString(struct kitten_stringbuilder__StringBuilder * __this,
                                                      char * append)
{
    kitten_stringbuilder_StringBuilder__ensureSpace(__this,
                                                    strlen(append));
    strcat((*__this).chars, append);
    (*__this).length += strlen(append);
}

void kitten_stringbuilder_StringBuilder__appendCharPtr(struct kitten_stringbuilder__StringBuilder * __this,
                                                       char * append,
                                                       int size)
{
    kitten_stringbuilder_StringBuilder__ensureSpace(__this, size);
    strncat((*__this).chars, append, size);
    (*__this).length += size;
}

void kitten_stringbuilder_StringBuilder__appendCharArray(struct kitten_stringbuilder__StringBuilder * __this,
                                                         char append[],
                                                         int size)
{
    kitten_stringbuilder_StringBuilder__ensureSpace(__this, size);
    strncat((*__this).chars, append, size);
    (*__this).length += size;
}

void kitten_stringbuilder_StringBuilder__appendInt(struct kitten_stringbuilder__StringBuilder * __this,
                                                   int append)
{
    int numSize = kitten_xs_Rounding__xs_CeilToInt(log10(append),
                                                   kitten_xs_Rounding__xs_doublemagicroundeps) + (int) 1;
    char * appendChars = malloc(numSize * sizeof(char));
    sprintf(appendChars, (char *) "%d", append);
    kitten_stringbuilder_StringBuilder__ensureSpace(__this, numSize);
    strcat((*__this).chars, appendChars);
    (*__this).length += numSize;
}

void kitten_stringbuilder_StringBuilder__appendFloat(struct kitten_stringbuilder__StringBuilder * __this,
                                                     float append,
                                                     int size)
{
    double appendAboveDecimal = kitten_xs_Rounding__xs_FloorToInt(append,
                                                                  kitten_xs_Rounding__xs_doublemagicroundeps);
    int aboveDecimalSize = kitten_xs_Rounding__xs_CeilToInt(log10(appendAboveDecimal),
                                                            kitten_xs_Rounding__xs_doublemagicroundeps) + (int) 1;
    if (size < (int) 0)
    {
        size = aboveDecimalSize;
    }
    else
    {
        size += (int) 1;
    }
    int cacheSize = size;
    int appendSize = kitten_stringbuilder___minSizePreDoubling;
    size = kitten_xs_Rounding__xs_MaxInt(aboveDecimalSize, size);
    appendSize = kitten_xs_Rounding__xs_MaxInt(size + (int) 1,
                                               appendSize) * (int) 2 + (int) 2;
    char * appendChars = malloc((cacheSize * (int) 2 + (int) 1) * sizeof(char));
    char * appendCharsTemp = malloc(appendSize * sizeof(char));
    sprintf(appendCharsTemp,
            (char *) "%.*f",
            kitten_xs_Rounding__xs_MaxInt(size - aboveDecimalSize - (int) 1,
                                          aboveDecimalSize),
            append);
    strncpy(appendChars,
            (char *) "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000",
            cacheSize * (int) 2 + (int) 1);
    strncpy(appendChars,
            appendCharsTemp,
            kitten_xs_Rounding__xs_MaxInt(cacheSize - (int) 1, (int) 1));
    kitten_stringbuilder_StringBuilder__ensureSpace(__this,
                                                    kitten_xs_Rounding__xs_MaxInt(cacheSize,
                                                                                  (int) 1));
    strcat((*__this).chars, appendChars);
    (*__this).length += kitten_xs_Rounding__xs_MaxInt(cacheSize,
                                                      (int) 1);
}

void kitten_stringbuilder_StringBuilder__appendBool(struct kitten_stringbuilder__StringBuilder * __this,
                                                    _Bool initialize,
                                                    enum kitten_stringbuilder__BoolMode mode,
                                                    enum kitten_stringbuilder__BoolCap capitalization)
{
    char * t = (char *) "-";
    char * f = (char *) "-";
    if (mode == kitten_stringbuilder_BoolMode__TRUE_FALSE)
    {
        if (capitalization == kitten_stringbuilder_BoolCap__LOWER)
        {
            t = (char *) "true";
            f = (char *) "false";
        }
        else if (capitalization == kitten_stringbuilder_BoolCap__UPPER)
        {
            t = (char *) "TRUE";
            f = (char *) "FALSE";
        }
        else if (capitalization == kitten_stringbuilder_BoolCap__TITLE)
        {
            t = (char *) "True";
            f = (char *) "False";
        }
    }
    else if (mode == kitten_stringbuilder_BoolMode__T_F)
    {
        if (capitalization == kitten_stringbuilder_BoolCap__LOWER)
        {
            t = (char *) "t";
            f = (char *) "f";
        }
        else if (capitalization == kitten_stringbuilder_BoolCap__UPPER)
        {
            t = (char *) "T";
            f = (char *) "F";
        }
        else if (capitalization == kitten_stringbuilder_BoolCap__TITLE)
        {
            t = (char *) "T";
            f = (char *) "F";
        }
    }
    else if (mode == kitten_stringbuilder_BoolMode__T1_F0)
    {
        t = (char *) "1";
        f = (char *) "0";
    }
    else if (mode == kitten_stringbuilder_BoolMode__ON_OFF)
    {
        if (capitalization == kitten_stringbuilder_BoolCap__LOWER)
        {
            t = (char *) "on";
            f = (char *) "off";
        }
        else if (capitalization == kitten_stringbuilder_BoolCap__UPPER)
        {
            t = (char *) "ON";
            f = (char *) "OFF";
        }
        else if (capitalization == kitten_stringbuilder_BoolCap__TITLE)
        {
            t = (char *) "On";
            f = (char *) "Off";
        }
    }
    kitten_stringbuilder_StringBuilder__appendString(__this,
                                                     initialize ? t : f);
}

void kitten_stringbuilder_StringBuilder__appendFromCopy(struct kitten_stringbuilder__StringBuilder * __this,
                                                        struct kitten_stringbuilder__StringBuilder initialize)
{
    kitten_stringbuilder_StringBuilder__appendCharPtr(__this,
                                                      initialize.chars,
                                                      initialize.length);
}

void kitten_stringbuilder_StringBuilder__printLengthAndAllocated(struct kitten_stringbuilder__StringBuilder * __this)
{
    printf((char *) "length: %d\n", (*__this).length);
    printf((char *) "allocated: %d\n", (*__this).allocated);
}

char * kitten_stringbuilder_StringBuilder__toString(struct kitten_stringbuilder__StringBuilder * __this)
{
    char * out = malloc(((*__this).length + (int) 1) * sizeof(char *));
    strcpy(out, (*__this).chars);
    return out;
}

char * kitten_stringbuilder_StringBuilder__returnWithString(struct kitten_stringbuilder__StringBuilder * __this,
                                                            char * append)
{
    char * out = malloc(((*__this).length + strlen(append) + (int) 1) * sizeof(char *));
    strcpy(out, (*__this).chars);
    strcat(out, append);
    return out;
}

char * kitten_stringbuilder_StringBuilder__returnWithCharPtr(struct kitten_stringbuilder__StringBuilder * __this,
                                                             char * append,
                                                             int size)
{
    char * out = malloc(((*__this).length + size + (int) 1) * sizeof(char *));
    strcpy(out, (*__this).chars);
    strncat(out, append, size);
    return out;
}

char * kitten_stringbuilder_StringBuilder__returnWithCharArray(struct kitten_stringbuilder__StringBuilder * __this,
                                                               char append[],
                                                               int size)
{
    char * out = malloc(((*__this).length + size + (int) 1) * sizeof(char *));
    strcpy(out, (*__this).chars);
    strncat(out, append, size);
    return out;
}

char * kitten_stringbuilder_StringBuilder__returnWithInt(struct kitten_stringbuilder__StringBuilder * __this,
                                                         int append)
{
    int numSize = kitten_xs_Rounding__xs_CeilToInt(log10(append),
                                                   kitten_xs_Rounding__xs_doublemagicroundeps) + (int) 1;
    char * appendChars = malloc(numSize * sizeof(char));
    sprintf(appendChars, (char *) "%d", append);
    return kitten_stringbuilder_StringBuilder__returnWithString(__this,
                                                                appendChars);
}

char * kitten_stringbuilder_StringBuilder__returnWithFloat(struct kitten_stringbuilder__StringBuilder * __this,
                                                           float append,
                                                           int size)
{
    double appendAboveDecimal = kitten_xs_Rounding__xs_FloorToInt(append,
                                                                  kitten_xs_Rounding__xs_doublemagicroundeps);
    int aboveDecimalSize = kitten_xs_Rounding__xs_CeilToInt(log10(appendAboveDecimal),
                                                            kitten_xs_Rounding__xs_doublemagicroundeps) + (int) 1;
    if (size < (int) 0)
    {
        size = aboveDecimalSize;
    }
    else
    {
        size += (int) 1;
    }
    int cacheSize = size;
    int appendSize = kitten_stringbuilder___minSizePreDoubling;
    size = kitten_xs_Rounding__xs_MaxInt(aboveDecimalSize, size);
    appendSize = kitten_xs_Rounding__xs_MaxInt(size + (int) 1,
                                               appendSize) * (int) 2 + (int) 2;
    char * appendChars = malloc((cacheSize * (int) 2 + (int) 1) * sizeof(char));
    char * appendCharsTemp = malloc(appendSize * sizeof(char));
    sprintf(appendCharsTemp,
            (char *) "%.*f",
            kitten_xs_Rounding__xs_MaxInt(size - aboveDecimalSize - (int) 1,
                                          aboveDecimalSize),
            append);
    strncpy(appendChars,
            (char *) "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000",
            cacheSize * (int) 2 + (int) 1);
    strncpy(appendChars,
            appendCharsTemp,
            kitten_xs_Rounding__xs_MaxInt(cacheSize - (int) 1, (int) 1));
    return kitten_stringbuilder_StringBuilder__returnWithString(__this,
                                                                appendChars);
}

char * kitten_stringbuilder_StringBuilder__returnWithBool(struct kitten_stringbuilder__StringBuilder * __this,
                                                          _Bool initialize,
                                                          enum kitten_stringbuilder__BoolMode mode,
                                                          enum kitten_stringbuilder__BoolCap capitalization)
{
    char * t = (char *) "-";
    char * f = (char *) "-";
    if (mode == kitten_stringbuilder_BoolMode__TRUE_FALSE)
    {
        if (capitalization == kitten_stringbuilder_BoolCap__LOWER)
        {
            t = (char *) "true";
            f = (char *) "false";
        }
        else if (capitalization == kitten_stringbuilder_BoolCap__UPPER)
        {
            t = (char *) "TRUE";
            f = (char *) "FALSE";
        }
        else if (capitalization == kitten_stringbuilder_BoolCap__TITLE)
        {
            t = (char *) "True";
            f = (char *) "False";
        }
    }
    else if (mode == kitten_stringbuilder_BoolMode__T_F)
    {
        if (capitalization == kitten_stringbuilder_BoolCap__LOWER)
        {
            t = (char *) "t";
            f = (char *) "f";
        }
        else if (capitalization == kitten_stringbuilder_BoolCap__UPPER)
        {
            t = (char *) "T";
            f = (char *) "F";
        }
        else if (capitalization == kitten_stringbuilder_BoolCap__TITLE)
        {
            t = (char *) "T";
            f = (char *) "F";
        }
    }
    else if (mode == kitten_stringbuilder_BoolMode__T1_F0)
    {
        t = (char *) "1";
        f = (char *) "0";
    }
    else if (mode == kitten_stringbuilder_BoolMode__ON_OFF)
    {
        if (capitalization == kitten_stringbuilder_BoolCap__LOWER)
        {
            t = (char *) "on";
            f = (char *) "off";
        }
        else if (capitalization == kitten_stringbuilder_BoolCap__UPPER)
        {
            t = (char *) "ON";
            f = (char *) "OFF";
        }
        else if (capitalization == kitten_stringbuilder_BoolCap__TITLE)
        {
            t = (char *) "On";
            f = (char *) "Off";
        }
    }
    return kitten_stringbuilder_StringBuilder__returnWithString(__this,
                                                                initialize ? t : f);
}

char * kitten_stringbuilder_StringBuilder__returnWithCopy(struct kitten_stringbuilder__StringBuilder * __this,
                                                          struct kitten_stringbuilder__StringBuilder initialize)
{
    return kitten_stringbuilder_StringBuilder__returnWithCharPtr(__this,
                                                                 initialize.chars,
                                                                 initialize.length);
}

void kitten_stringbuilder_StringBuilder__ensureSpace(struct kitten_stringbuilder__StringBuilder * __this,
                                                     int addLen)
{
    if (addLen == (int) 0)
    {
        return;
    }
    if ((*__this).allocated >= (*__this).length + addLen + (int) 1)
    {
        return;
    }
    int stopIter = (int) 0;
    while ((*__this).allocated < (*__this).length + addLen + (int) 1)
    {
        (*__this).allocated <<= (int) 1;
        if ((*__this).allocated == (int) 0)
        {
            (*__this).allocated--;
        }
        if (stopIter >= (int) 150)
        {
            break;
        }
        stopIter++;
    }
    (*__this).chars = realloc((*__this).chars, (*__this).allocated);
    (*__this).allocated = (*__this).allocated + addLen;
}

struct kitten_stringbuilder__StringBuilder kitten_stringbuilder_StringBuilder__new(int size)
{
    size = kitten_xs_Rounding__xs_MaxInt(size,
                                         kitten_stringbuilder___minSizePreDoubling * (int) 2);
    return (struct kitten_stringbuilder__StringBuilder) {.chars = malloc((int) 20 * sizeof(char)), .length = (int) 0, .allocated = size};
}
