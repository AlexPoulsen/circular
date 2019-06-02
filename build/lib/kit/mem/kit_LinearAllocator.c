#include "main.h"

struct kit_option_Option__b0e8e219aa3cff69af74d1b7 kit_mem_LinearAllocator__alloc(struct kit_mem__LinearAllocator * __this,
                                                                                  size_t n)
{
    if ((*__this).capacity - (size_t) ((uint8_t *) (*__this).curPtr - (uint8_t *) (*__this).start) >= n)
    {
        void * next = (*__this).curPtr;
        (*__this).curPtr = (uint8_t *) (*__this).curPtr + n;
        return (struct kit_option_Option__b0e8e219aa3cff69af74d1b7) {.__dsc = kit_option_Option_b0e8e219aa3cff69af74d1b7__Some, .__var.variant_Some = (struct kit_option_Option_b0e8e219aa3cff69af74d1b7_Some__data) {.value = next}};
    }
    else
    {
        return (struct kit_option_Option__b0e8e219aa3cff69af74d1b7) {.__dsc = kit_option_Option_b0e8e219aa3cff69af74d1b7__None};
    }
}

void kit_mem_LinearAllocator__reset(struct kit_mem__LinearAllocator * __this)
{
    (*__this).curPtr = (*__this).start;
}

size_t kit_mem_LinearAllocator__remaining(struct kit_mem__LinearAllocator * __this)
{
    return (*__this).capacity - (size_t) ((uint8_t *) (*__this).curPtr - (uint8_t *) (*__this).start);
}

void kit_mem_LinearAllocator__destroy(struct kit_mem__LinearAllocator * __this)
{
    ((*(*__this).parent.__vtable).free)((*__this).parent.__this,
                                        (*__this).start);
}

struct kit_mem__LinearAllocator kit_mem_LinearAllocator__new(struct kit_mem_Allocator__box parent,
                                                             size_t capacity)
{
    void * start = ((*parent.__vtable).alloc)(parent.__this, capacity);
    return (struct kit_mem__LinearAllocator) {.parent = parent, .start = start, .curPtr = start, .capacity = capacity};
}
