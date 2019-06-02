#include "main.h"

void circular__printInt(int i)
{
    printf((char *) "%d\n", i);
}

char * circular__repeatChar(char what, int times)
{
    char * out = malloc(times);
    for (int n = (int) 0; n < times; ++n)
    {
        strncat(out, &what, (size_t) 1);
    }
    return out;
}

int circular__mult(int a, int b)
{
    return a * b;
}
