#include "main.h"

void kit_array_Array_245c01af2be1c62453ba052f__blit(struct kit_slice_Slice__245c01af2be1c62453ba052f * __this,
                                                    struct kit_slice_Slice__245c01af2be1c62453ba052f * other,
                                                    size_t start,
                                                    size_t length)
{
    memcpy((void *) &(*other).data[start],
           (void *) (*__this).data,
           length * sizeof(char));
}

struct kit_slice_Slice__245c01af2be1c62453ba052f kit_array_Array_245c01af2be1c62453ba052f__copy(struct kit_slice_Slice__245c01af2be1c62453ba052f * __this,
                                                                                                struct kit_mem_Allocator__box allocator)
{
    struct kit_slice_Slice__245c01af2be1c62453ba052f a = kit_array_Array_245c01af2be1c62453ba052f__new(allocator,
                                                                                                       (*__this).length);
    kit_array_Array_245c01af2be1c62453ba052f__blit(__this,
                                                   &a,
                                                   (size_t) 0,
                                                   (*__this).length);
    return a;
}

void kit_array_Array_245c01af2be1c62453ba052f__free(struct kit_slice_Slice__245c01af2be1c62453ba052f * __this,
                                                    struct kit_mem_Allocator__box allocator)
{
    ((*allocator.__vtable).free)(allocator.__this, (*__this).data);
}

struct kit_slice_Slice__db51f4a3b554b90e9cb6c3c3 kit_array_Array_db51f4a3b554b90e9cb6c3c3__new(struct kit_mem_Allocator__box allocator,
                                                                                               size_t length)
{
    uint8_t * data = ((*allocator.__vtable).calloc)(allocator.__this,
                                                    sizeof(uint8_t) * length);
    return (struct kit_slice_Slice__db51f4a3b554b90e9cb6c3c3) {.length = length, .data = data};
}

void kit_array_Array_db51f4a3b554b90e9cb6c3c3__blit(struct kit_slice_Slice__db51f4a3b554b90e9cb6c3c3 * __this,
                                                    struct kit_slice_Slice__db51f4a3b554b90e9cb6c3c3 * other,
                                                    size_t start,
                                                    size_t length)
{
    memcpy((void *) &(*other).data[start],
           (void *) (*__this).data,
           length * sizeof(uint8_t));
}

struct kit_slice_Slice__db51f4a3b554b90e9cb6c3c3 kit_array_Array_db51f4a3b554b90e9cb6c3c3__copy(struct kit_slice_Slice__db51f4a3b554b90e9cb6c3c3 * __this,
                                                                                                struct kit_mem_Allocator__box allocator)
{
    struct kit_slice_Slice__db51f4a3b554b90e9cb6c3c3 a = kit_array_Array_db51f4a3b554b90e9cb6c3c3__new(allocator,
                                                                                                       (*__this).length);
    kit_array_Array_db51f4a3b554b90e9cb6c3c3__blit(__this,
                                                   &a,
                                                   (size_t) 0,
                                                   (*__this).length);
    return a;
}

void kit_array_Array_db51f4a3b554b90e9cb6c3c3__free(struct kit_slice_Slice__db51f4a3b554b90e9cb6c3c3 * __this,
                                                    struct kit_mem_Allocator__box allocator)
{
    ((*allocator.__vtable).free)(allocator.__this, (*__this).data);
}

struct kit_slice_Slice__245c01af2be1c62453ba052f kit_array_Array_245c01af2be1c62453ba052f__new(struct kit_mem_Allocator__box allocator,
                                                                                               size_t length)
{
    char * data = ((*allocator.__vtable).calloc)(allocator.__this,
                                                 sizeof(char) * length);
    return (struct kit_slice_Slice__245c01af2be1c62453ba052f) {.length = length, .data = data};
}
