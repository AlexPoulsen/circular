#include "main.h"

void * kit_io_Writable_84558aa4a52e53199fd20a2b__ptr(void * __vthis)
{
    char * * __this = (char * *) __vthis;
    {
        return *__this;
    }
}

size_t kit_io_Writable_84558aa4a52e53199fd20a2b__size(void * __vthis)
{
    char * * __this = (char * *) __vthis;
    {
        return strlen(*__this) + (int) 1;
    }
}

struct kit_io_Writable__vtable kit_io_Writable__84558aa4a52e53199fd20a2b = { .ptr = kit_io_Writable_84558aa4a52e53199fd20a2b__ptr, .size = kit_io_Writable_84558aa4a52e53199fd20a2b__size };
