#include "main.h"

int kit_map_Hashable_a8e36feebcdf611d5ad0266f__hash(void * __vthis)
{
    struct kit_slice_Slice__245c01af2be1c62453ba052f * __this = (struct kit_slice_Slice__245c01af2be1c62453ba052f *) __vthis;
    {
        int hash = (int) 5381;
        {
            size_t __length = (*__this).length;
            for (size_t __i = (size_t) 0; __i < __length; ++__i)
            {
                char __kit__char = (*__this).data[__i];
                {
                    hash = (hash << (int) 5) + hash + __kit__char;
                }
            }
        }
        return hash;
    }
}

struct kit_map_Hashable__vtable kit_map_Hashable__a8e36feebcdf611d5ad0266f = { .hash = kit_map_Hashable_a8e36feebcdf611d5ad0266f__hash };
