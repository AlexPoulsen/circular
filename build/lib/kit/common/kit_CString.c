#include "main.h"

char * kit_common_CString__copy(char * * __this,
                                struct kit_mem_Allocator__box allocator)
{
    void * new = ((*allocator.__vtable).alloc)(allocator.__this,
                                               strlen(*__this) + (int) 1);
    strcpy(new, *__this);
    return new;
}

_Bool kit_common_CString__startsWith(char * * __this, char * other)
{
    size_t len1 = strlen(*__this);
    size_t len2 = strlen(other);
    return len1 >= len2 && strncmp(*__this, other, len2) == (int) 0;
}

_Bool kit_common_CString__endsWith(char * * __this, char * other)
{
    size_t len1 = strlen(*__this);
    size_t len2 = strlen(other);
    return len1 >= len2 && strcmp(&(*__this)[len1 - len2],
                                  other) == (int) 0;
}

_Bool kit_common_CString__eq(char * * __this, char * other)
{
    if ((void *) *__this == NULL && (void *) other == NULL)
    {
        return 1;
    }
    else if ((void *) *__this == NULL || (void *) other == NULL)
    {
        return 0;
    }
    else
    {
        return strcmp(*__this, other) == (int) 0;
    }
}

char * kit_common_CString__alloc(struct kit_mem_Allocator__box allocator,
                                 size_t chars)
{
    return ((*allocator.__vtable).calloc)(allocator.__this,
                                          chars + (int) 1);
}
