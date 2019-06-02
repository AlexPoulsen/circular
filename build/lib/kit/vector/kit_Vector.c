#include "main.h"

void kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__free(struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 * __this)
{
    kit_array_Array_db51f4a3b554b90e9cb6c3c3__free(&(*__this).data,
                                                   (*__this).allocator);
}

uint8_t kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__push(struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 * __this,
                                                         uint8_t value)
{
    kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__ensureSize(__this,
                                                           (*__this).length + (int) 1);
    return (*__this).data.data[(*__this).length++] = value;
}

struct kit_option_Option__db51f4a3b554b90e9cb6c3c3 kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__pop(struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 * __this)
{
    if ((*__this).length > (size_t) 0)
    {
        return (struct kit_option_Option__db51f4a3b554b90e9cb6c3c3) {.__dsc = kit_option_Option_db51f4a3b554b90e9cb6c3c3__Some, .__var.variant_Some = (struct kit_option_Option_db51f4a3b554b90e9cb6c3c3_Some__data) {.value = (*__this).data.data[--(*__this).length]}};
    }
    else
    {
        return (struct kit_option_Option__db51f4a3b554b90e9cb6c3c3) {.__dsc = kit_option_Option_db51f4a3b554b90e9cb6c3c3__None};
    }
}

uint8_t * kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__grow(struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 * __this)
{
    kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__ensureSize(__this,
                                                           (*__this).length + (int) 1);
    return &(*__this).data.data[(*__this).length++];
}

struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__concat(struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 * __this,
                                                                                                      struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 other)
{
    struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 newVector = kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__new(kit_mem__mallocator,
                                                                                                                   (*__this).length + other.length);
    for (size_t i = (size_t) 0; i < (*__this).length; ++i)
    {
        kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__push(&newVector,
                                                         (*__this).data.data[i]);
    }
    for (size_t i = (size_t) 0; i < other.length; ++i)
    {
        kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__push(&newVector,
                                                         other.data.data[i]);
    }
    return newVector;
}

void kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__clear(struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 * __this)
{
    (*__this).length = (size_t) 0;
}

void kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__ensureSize(struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 * __this,
                                                            size_t n)
{
    size_t l = (*__this).data.length;
    if (l < n)
    {
        if (l < (size_t) 1)
        {
            l = (size_t) 1;
        }
        do
        {
            l = (size_t) (l * 1.5f);
        }
        while (l < n);
        uint8_t * newData = ((*(*__this).allocator.__vtable).alloc)((*__this).allocator.__this,
                                                                    l * sizeof(uint8_t));
        uint8_t * oldData = (*__this).data.data;
        memcpy(newData, oldData, (*__this).length * sizeof(uint8_t));
        (*__this).data.length = l;
        (*__this).data.data = newData;
        ((*(*__this).allocator.__vtable).free)((*__this).allocator.__this,
                                               oldData);
    }
}

uint8_t * kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__ref(struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 * __this)
{
    return (*__this).data.data;
}

struct kit_slice_Slice__db51f4a3b554b90e9cb6c3c3 kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__slice(struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 * __this)
{
    return (struct kit_slice_Slice__db51f4a3b554b90e9cb6c3c3) {.length = (*__this).length, .data = kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__ref(__this)};
}

uint8_t kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__removeAt(struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 * __this,
                                                             int i)
{
    uint8_t val = (*__this).data.data[i];
    if (i < (*__this).length - (int) 1)
    {
        memcpy(&(*__this).data.data[i],
               &(*__this).data.data[i + (int) 1],
               ((*__this).length - i) * sizeof(uint8_t));
    }
    --(*__this).length;
    return val;
}

struct kit_vector_Vector__245c01af2be1c62453ba052f kit_vector_Vector_245c01af2be1c62453ba052f__new(struct kit_mem_Allocator__box allocator,
                                                                                                   size_t capacity)
{
    if (capacity < (size_t) 4)
    {
        capacity = (size_t) 4;
    }
    return (struct kit_vector_Vector__245c01af2be1c62453ba052f) {.allocator = allocator, .length = (size_t) 0, .data = kit_array_Array_245c01af2be1c62453ba052f__new(allocator,
                                                                                                                                                                     capacity)};
}

void kit_vector_Vector_245c01af2be1c62453ba052f__free(struct kit_vector_Vector__245c01af2be1c62453ba052f * __this)
{
    kit_array_Array_245c01af2be1c62453ba052f__free(&(*__this).data,
                                                   (*__this).allocator);
}

char kit_vector_Vector_245c01af2be1c62453ba052f__push(struct kit_vector_Vector__245c01af2be1c62453ba052f * __this,
                                                      char value)
{
    kit_vector_Vector_245c01af2be1c62453ba052f__ensureSize(__this,
                                                           (*__this).length + (int) 1);
    return (*__this).data.data[(*__this).length++] = value;
}

struct kit_option_Option__245c01af2be1c62453ba052f kit_vector_Vector_245c01af2be1c62453ba052f__pop(struct kit_vector_Vector__245c01af2be1c62453ba052f * __this)
{
    if ((*__this).length > (size_t) 0)
    {
        return (struct kit_option_Option__245c01af2be1c62453ba052f) {.__dsc = kit_option_Option_245c01af2be1c62453ba052f__Some, .__var.variant_Some = (struct kit_option_Option_245c01af2be1c62453ba052f_Some__data) {.value = (*__this).data.data[--(*__this).length]}};
    }
    else
    {
        return (struct kit_option_Option__245c01af2be1c62453ba052f) {.__dsc = kit_option_Option_245c01af2be1c62453ba052f__None};
    }
}

char * kit_vector_Vector_245c01af2be1c62453ba052f__grow(struct kit_vector_Vector__245c01af2be1c62453ba052f * __this)
{
    kit_vector_Vector_245c01af2be1c62453ba052f__ensureSize(__this,
                                                           (*__this).length + (int) 1);
    return &(*__this).data.data[(*__this).length++];
}

struct kit_vector_Vector__245c01af2be1c62453ba052f kit_vector_Vector_245c01af2be1c62453ba052f__concat(struct kit_vector_Vector__245c01af2be1c62453ba052f * __this,
                                                                                                      struct kit_vector_Vector__245c01af2be1c62453ba052f other)
{
    struct kit_vector_Vector__245c01af2be1c62453ba052f newVector = kit_vector_Vector_245c01af2be1c62453ba052f__new(kit_mem__mallocator,
                                                                                                                   (*__this).length + other.length);
    for (size_t i = (size_t) 0; i < (*__this).length; ++i)
    {
        kit_vector_Vector_245c01af2be1c62453ba052f__push(&newVector,
                                                         (*__this).data.data[i]);
    }
    for (size_t i = (size_t) 0; i < other.length; ++i)
    {
        kit_vector_Vector_245c01af2be1c62453ba052f__push(&newVector,
                                                         other.data.data[i]);
    }
    return newVector;
}

void kit_vector_Vector_245c01af2be1c62453ba052f__clear(struct kit_vector_Vector__245c01af2be1c62453ba052f * __this)
{
    (*__this).length = (size_t) 0;
}

void kit_vector_Vector_245c01af2be1c62453ba052f__ensureSize(struct kit_vector_Vector__245c01af2be1c62453ba052f * __this,
                                                            size_t n)
{
    size_t l = (*__this).data.length;
    if (l < n)
    {
        if (l < (size_t) 1)
        {
            l = (size_t) 1;
        }
        do
        {
            l = (size_t) (l * 1.5f);
        }
        while (l < n);
        char * newData = ((*(*__this).allocator.__vtable).alloc)((*__this).allocator.__this,
                                                                 l * sizeof(char));
        char * oldData = (*__this).data.data;
        memcpy(newData, oldData, (*__this).length * sizeof(char));
        (*__this).data.length = l;
        (*__this).data.data = newData;
        ((*(*__this).allocator.__vtable).free)((*__this).allocator.__this,
                                               oldData);
    }
}

char * kit_vector_Vector_245c01af2be1c62453ba052f__ref(struct kit_vector_Vector__245c01af2be1c62453ba052f * __this)
{
    return (*__this).data.data;
}

struct kit_slice_Slice__245c01af2be1c62453ba052f kit_vector_Vector_245c01af2be1c62453ba052f__slice(struct kit_vector_Vector__245c01af2be1c62453ba052f * __this)
{
    return (struct kit_slice_Slice__245c01af2be1c62453ba052f) {.length = (*__this).length, .data = kit_vector_Vector_245c01af2be1c62453ba052f__ref(__this)};
}

char kit_vector_Vector_245c01af2be1c62453ba052f__removeAt(struct kit_vector_Vector__245c01af2be1c62453ba052f * __this,
                                                          int i)
{
    char val = (*__this).data.data[i];
    if (i < (*__this).length - (int) 1)
    {
        memcpy(&(*__this).data.data[i],
               &(*__this).data.data[i + (int) 1],
               ((*__this).length - i) * sizeof(char));
    }
    --(*__this).length;
    return val;
}

struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3 kit_vector_Vector_db51f4a3b554b90e9cb6c3c3__new(struct kit_mem_Allocator__box allocator,
                                                                                                   size_t capacity)
{
    if (capacity < (size_t) 4)
    {
        capacity = (size_t) 4;
    }
    return (struct kit_vector_Vector__db51f4a3b554b90e9cb6c3c3) {.allocator = allocator, .length = (size_t) 0, .data = kit_array_Array_db51f4a3b554b90e9cb6c3c3__new(allocator,
                                                                                                                                                                     capacity)};
}
