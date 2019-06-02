#include "main.h"

void * kit_mem_Allocator_6381ed4a392eb3039656f126__alloc(void * __vthis,
                                                         size_t n)
{
    struct kit_mem__SimpleAllocator * __this = (struct kit_mem__SimpleAllocator *) __vthis;
    {
        return ((*__this).alloc)(n);
    }
}

void kit_mem_Allocator_6381ed4a392eb3039656f126__free(void * __vthis,
                                                      void * ptr)
{
    struct kit_mem__SimpleAllocator * __this = (struct kit_mem__SimpleAllocator *) __vthis;
    {
        ((*__this).free)(ptr);
    }
}

void * kit_mem_Allocator_6381ed4a392eb3039656f126__calloc(void * __vthis,
                                                          size_t n)
{
    struct kit_mem__SimpleAllocator * __this = (struct kit_mem__SimpleAllocator *) __vthis;
    {
        return ((*__this).calloc)(n);
    }
}

struct kit_mem_Allocator__vtable kit_mem_Allocator__6381ed4a392eb3039656f126 = { .alloc = kit_mem_Allocator_6381ed4a392eb3039656f126__alloc, .free = kit_mem_Allocator_6381ed4a392eb3039656f126__free, .calloc = kit_mem_Allocator_6381ed4a392eb3039656f126__calloc };
