#include "main.h"

struct kit_option_Option__b0e8e219aa3cff69af74d1b7 kit_mem_StackAllocator__alloc(struct kit_mem__StackAllocator * __this,
                                                                                 size_t n)
{
    if ((*__this).capacity >= n)
    {
        void * next = (*__this).curPtr;
        (*__this).curPtr = (uint8_t *) (*__this).curPtr + n;
        (*__this).capacity -= n;
        return (struct kit_option_Option__b0e8e219aa3cff69af74d1b7) {.__dsc = kit_option_Option_b0e8e219aa3cff69af74d1b7__Some, .__var.variant_Some = (struct kit_option_Option_b0e8e219aa3cff69af74d1b7_Some__data) {.value = next}};
    }
    else
    {
        return (struct kit_option_Option__b0e8e219aa3cff69af74d1b7) {.__dsc = kit_option_Option_b0e8e219aa3cff69af74d1b7__None};
    }
}

void kit_mem_StackAllocator__free(struct kit_mem__StackAllocator * __this,
                                  void * ptr)
{
    (*__this).capacity += (size_t) ((uint8_t *) (*__this).curPtr - (uint8_t *) ptr);
    (*__this).curPtr = ptr;
}

size_t kit_mem_StackAllocator__remaining(struct kit_mem__StackAllocator * __this)
{
    return (*__this).capacity;
}

void kit_mem_StackAllocator__destroy(struct kit_mem__StackAllocator * __this)
{
    ((*(*__this).parent.__vtable).free)((*__this).parent.__this,
                                        (*__this).start);
}

struct kit_mem__StackAllocator kit_mem_StackAllocator__new(struct kit_mem_Allocator__box parent,
                                                           size_t capacity)
{
    void * curPtr = ((*parent.__vtable).alloc)(parent.__this,
                                               capacity);
    return (struct kit_mem__StackAllocator) {.parent = parent, .start = curPtr, .curPtr = curPtr, .capacity = capacity};
}
