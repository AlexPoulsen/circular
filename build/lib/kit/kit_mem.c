#include "main.h"

void * kit_mem__callocWrapper(size_t n)
{
    return calloc(n, (size_t) 1);
}

struct kit_mem_Allocator__box kit_mem__mallocator = { .__this = &(struct kit_mem__SimpleAllocator) {.alloc = malloc, .calloc = kit_mem__callocWrapper, .free = free}, .__vtable = &kit_mem_Allocator__6381ed4a392eb3039656f126 };
