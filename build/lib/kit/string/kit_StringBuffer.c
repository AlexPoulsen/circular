#include "main.h"

void kit_string_StringBuffer__add(struct kit_vector_Vector__245c01af2be1c62453ba052f * __this,
                                  char * s)
{
    size_t l = strlen(s);
    for (size_t i = (size_t) 0; i < l; ++i)
    {
        kit_vector_Vector_245c01af2be1c62453ba052f__push(__this, s[i]);
    }
}

struct kit_slice_Slice__245c01af2be1c62453ba052f kit_string_StringBuffer__toString(struct kit_vector_Vector__245c01af2be1c62453ba052f * __this)
{
    kit_vector_Vector_245c01af2be1c62453ba052f__push(__this, (char) 0);
    struct kit_slice_Slice__245c01af2be1c62453ba052f s = kit_string_String__fromCString((*__this).allocator,
                                                                                        (*__this).data.data);
    kit_vector_Vector_245c01af2be1c62453ba052f__pop(__this);
    return s;
}

struct kit_vector_Vector__245c01af2be1c62453ba052f kit_string_StringBuffer__new(struct kit_mem_Allocator__box allocator,
                                                                                size_t capacity)
{
    return kit_vector_Vector_245c01af2be1c62453ba052f__new(allocator,
                                                           capacity);
}
