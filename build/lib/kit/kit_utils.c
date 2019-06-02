#include "main.h"

void kit_utils__panic(const char * msg, ...)
{
    va_list args;
    va_start(args, msg);
    {
        {
            vfprintf(__stderrp, msg, args);
            fputs((char *) "", __stderrp);
        }
        abort();
    }
}
