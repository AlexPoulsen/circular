#include "main.h"

void * kitten_stringbuilder__strAdd(char * one, char * two)
{
    void * out = malloc(strlen(one) + strlen(two) + (int) 1);
    strcpy(out, one);
    strcat(out, two);
    return out;
}

int kitten_stringbuilder___minSizePreDoubling = (int) 10;

void kitten_stringbuilder__main()
{
    kitten_xs_Rounding__checkEndianness();
    struct kitten_stringbuilder__StringBuilder builder = kitten_stringbuilder_StringBuilder__newFromBool(1,
                                                                                                         kitten_stringbuilder_BoolMode__TRUE_FALSE,
                                                                                                         kitten_stringbuilder_BoolCap__LOWER,
                                                                                                         (int) 10);
    kitten_stringbuilder_StringBuilder__printLengthAndAllocated(&builder);
    printf((char *) "%s\n\n",
           kitten_stringbuilder_StringBuilder__toString(&builder));
    char * cp = (char *) "abc 123";
    char ca[7];
    strcpy(ca, (char *) "lol hi");
    kitten_stringbuilder_StringBuilder__appendCharPtr(&builder,
                                                      cp,
                                                      (int) 7);
    kitten_stringbuilder_StringBuilder__printLengthAndAllocated(&builder);
    printf((char *) "%s\n\n",
           kitten_stringbuilder_StringBuilder__toString(&builder));
    kitten_stringbuilder_StringBuilder__appendCharArray(&builder,
                                                        ca,
                                                        (int) 6);
    kitten_stringbuilder_StringBuilder__printLengthAndAllocated(&builder);
    printf((char *) "%s\n\n",
           kitten_stringbuilder_StringBuilder__toString(&builder));
    kitten_stringbuilder_StringBuilder__appendFloat(&builder,
                                                    1.5326f,
                                                    (int) 6);
    kitten_stringbuilder_StringBuilder__printLengthAndAllocated(&builder);
    printf((char *) "%s\n\n",
           kitten_stringbuilder_StringBuilder__toString(&builder));
    kitten_stringbuilder_StringBuilder__appendString(&builder,
                                                     (char *) " -");
    kitten_stringbuilder_StringBuilder__printLengthAndAllocated(&builder);
    printf((char *) "%s\n\n",
           kitten_stringbuilder_StringBuilder__toString(&builder));
    kitten_stringbuilder_StringBuilder__appendBool(&builder,
                                                   0,
                                                   kitten_stringbuilder_BoolMode__T_F,
                                                   kitten_stringbuilder_BoolCap__UPPER);
    kitten_stringbuilder_StringBuilder__printLengthAndAllocated(&builder);
    printf((char *) "%s\n\n",
           kitten_stringbuilder_StringBuilder__toString(&builder));
    kitten_stringbuilder_StringBuilder__appendInt(&builder, (int) 426);
    kitten_stringbuilder_StringBuilder__printLengthAndAllocated(&builder);
    printf((char *) "%s\n\n",
           kitten_stringbuilder_StringBuilder__toString(&builder));
    kitten_stringbuilder_StringBuilder__appendString(&builder,
                                                     (char *) "- fooooooooooooooooooooooooooo");
    kitten_stringbuilder_StringBuilder__printLengthAndAllocated(&builder);
    printf((char *) "%s\n\n",
           kitten_stringbuilder_StringBuilder__toString(&builder));
    printf((char *) "%s\n\n",
           kitten_stringbuilder_StringBuilder__returnWithString(&builder,
                                                                (char *) "5"));
    printf((char *) "%s\n\n",
           kitten_stringbuilder_StringBuilder__returnWithCharPtr(&builder,
                                                                 cp,
                                                                 (int) 7));
    printf((char *) "%s\n\n",
           kitten_stringbuilder_StringBuilder__returnWithCharArray(&builder,
                                                                   ca,
                                                                   (int) 6));
    printf((char *) "%s\n\n",
           kitten_stringbuilder_StringBuilder__returnWithInt(&builder,
                                                             (int) 5));
    printf((char *) "%s\n\n",
           kitten_stringbuilder_StringBuilder__returnWithFloat(&builder,
                                                               42.261f,
                                                               (int) 6));
    printf((char *) "%s\n\n",
           kitten_stringbuilder_StringBuilder__returnWithBool(&builder,
                                                              1,
                                                              kitten_stringbuilder_BoolMode__TRUE_FALSE,
                                                              kitten_stringbuilder_BoolCap__LOWER));
    printf((char *) "%s\n\n",
           kitten_stringbuilder_StringBuilder__returnWithBool(&builder,
                                                              0,
                                                              kitten_stringbuilder_BoolMode__TRUE_FALSE,
                                                              kitten_stringbuilder_BoolCap__LOWER));
    printf((char *) "%s\n\n",
           kitten_stringbuilder_StringBuilder__returnWithCopy(&builder,
                                                              builder));
}
