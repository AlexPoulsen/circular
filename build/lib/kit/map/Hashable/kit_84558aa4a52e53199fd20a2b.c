#include "main.h"

int kit_map_Hashable_84558aa4a52e53199fd20a2b__hash(void * __vthis)
{
    char * * __this = (char * *) __vthis;
    {
        int hash = (int) 5381;
        {
            char * __i = *__this;
            while (__i != NULL && *__i != (char) 0)
            {
                char __kit__char = * (__i++);
                {
                    hash = (hash << (int) 5) + hash + __kit__char;
                }
            }
        }
        return hash;
    }
}

struct kit_map_Hashable__vtable kit_map_Hashable__84558aa4a52e53199fd20a2b = { .hash = kit_map_Hashable_84558aa4a52e53199fd20a2b__hash };
