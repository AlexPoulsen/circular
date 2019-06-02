#include "main.h"

void * kit_mem_Allocator_4221090da42112d334709b60__alloc(void * __vthis,
                                                         size_t s)
{
    struct kit_mem__LinearAllocator * __this = (struct kit_mem__LinearAllocator *) __vthis;
    {
        struct kit_option_Option__b0e8e219aa3cff69af74d1b7 __tmp1 = kit_mem_LinearAllocator__alloc(__this,
                                                                                                   s);
        if (__tmp1.__dsc == kit_option_Option_b0e8e219aa3cff69af74d1b7__Some)
        {
            void * __match__1 = __tmp1.__var.variant_Some.value;
            void * x = __match__1;
            {
                return x;
            }
        }
        else
        {
            kit_utils__panic((char *) "failed to allocate from LinearAllocator");
            return NULL;
        }
    }
}

void kit_mem_Allocator_4221090da42112d334709b60__free(void * __vthis,
                                                      void * p)
{
    struct kit_mem__LinearAllocator * __this = (struct kit_mem__LinearAllocator *) __vthis;
    {
    }
}

void * kit_mem_Allocator_4221090da42112d334709b60__calloc(void * __vthis,
                                                          size_t n)
{
    struct kit_mem__LinearAllocator * __this = (struct kit_mem__LinearAllocator *) __vthis;
    {
        void * ptr = (kit_mem_Allocator__4221090da42112d334709b60.alloc)(__this,
                                                                         n);
        memset(ptr, (int) 0, n);
        return ptr;
    }
}

struct kit_mem_Allocator__vtable kit_mem_Allocator__4221090da42112d334709b60 = { .alloc = kit_mem_Allocator_4221090da42112d334709b60__alloc, .free = kit_mem_Allocator_4221090da42112d334709b60__free, .calloc = kit_mem_Allocator_4221090da42112d334709b60__calloc };
