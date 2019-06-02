#include "main.h"

int circular__mult(int a, int b)
{
    return a * b;
}

void circular__printSB(struct kitten_stringbuilder__StringBuilder s)
{
    printf((char *) "%s\n",
           kitten_stringbuilder_StringBuilder__toString(&s));
}

void circular__printInt(int i)
{
    printf((char *) "%d\n", i);
}

struct kitten_stringbuilder__StringBuilder circular__appendSB(struct kitten_stringbuilder__StringBuilder s,
                                                              struct kitten_stringbuilder__StringBuilder append)
{
    return kitten_stringbuilder_StringBuilder__newFromString(kitten_stringbuilder_StringBuilder__returnWithCopy(&s,
                                                                                                                append),
                                                             (int) 0);
}
