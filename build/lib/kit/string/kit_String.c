#include "main.h"

_Bool kit_string_String__compare(struct kit_slice_Slice__245c01af2be1c62453ba052f * __this,
                                 struct kit_slice_Slice__245c01af2be1c62453ba052f other)
{
    if ((*__this).length != other.length)
    {
        return 0;
    }
    for (size_t i = (size_t) 0; i < (*__this).length; ++i)
    {
        if ((*__this).data[i] != other.data[i])
        {
            return 0;
        }
    }
    return 1;
}

struct kit_slice_Slice__245c01af2be1c62453ba052f kit_string_String__fromCString(struct kit_mem_Allocator__box allocator,
                                                                                char * source)
{
    size_t length = strlen(source);
    char * data = ((*allocator.__vtable).alloc)(allocator.__this,
                                                length + (int) 1);
    strcpy(data, source);
    return (struct kit_slice_Slice__245c01af2be1c62453ba052f) {.length = length, .data = data};
}
