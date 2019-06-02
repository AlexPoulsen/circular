#include "main.h"

void circular_Circular_2a867e0193ff634180614473__reset(struct circular_Circular__2a867e0193ff634180614473 * __this)
{
    (*__this).head = (int) 0;
    (*__this).tail = (int) 0;
    (*__this).full = 0;
}

void circular_Circular_2a867e0193ff634180614473__resetWipeBuffer(struct circular_Circular__2a867e0193ff634180614473 * __this)
{
    (*__this).head = (int) 0;
    (*__this).tail = (int) 0;
    (*__this).full = 0;
    memset((*__this).buffer, (int) 0, (*__this).bufSize);
}

int circular_Circular_2a867e0193ff634180614473__get(struct circular_Circular__2a867e0193ff634180614473 * __this,
                                                    int offset)
{
    (*__this).tail++;
    return (*__this).buffer[(offset + (*__this).tail - (int) 1) % (*__this).size];
}

void circular_Circular_2a867e0193ff634180614473__set(struct circular_Circular__2a867e0193ff634180614473 * __this,
                                                     int value,
                                                     int offset)
{
    (*__this).buffer[(offset + (*__this).head) % (*__this).size] = value;
    (*__this).head++;
    if ((*__this).head == (*__this).tail)
    {
        (*__this).full = 1;
    }
}

_Bool circular_Circular_2a867e0193ff634180614473__isEmpty(struct circular_Circular__2a867e0193ff634180614473 * __this)
{
    return (*__this).head == (*__this).tail && !(*__this).full;
}

_Bool circular_Circular_2a867e0193ff634180614473__isFull(struct circular_Circular__2a867e0193ff634180614473 * __this)
{
    return (*__this).full;
}

void circular_Circular_2a867e0193ff634180614473__mapGet(struct circular_Circular__2a867e0193ff634180614473 * __this,
                                                        void (* fn)(int),
                                                        int offset)
{
    for (int n = (int) 0; n < (*__this).size; ++n)
    {
        fn(circular_Circular_2a867e0193ff634180614473__get(__this,
                                                           offset));
    }
}

void circular_Circular_2a867e0193ff634180614473__mapSet(struct circular_Circular__2a867e0193ff634180614473 * __this,
                                                        int (* fn)(int, int),
                                                        int value,
                                                        int offset)
{
    for (int n = (int) 0; n < (*__this).size; ++n)
    {
        circular_Circular_2a867e0193ff634180614473__set(__this,
                                                        fn(circular_Circular_2a867e0193ff634180614473__get(__this,
                                                                                                           offset),
                                                           value),
                                                        offset);
    }
}

struct circular_Circular__2a867e0193ff634180614473 circular_Circular_2a867e0193ff634180614473__new(int size,
                                                                                                   struct kit_mem_Allocator__box allocator)
{
    int bufSize = size * sizeof(int);
    int * buf = ((*allocator.__vtable).alloc)(allocator.__this,
                                              bufSize);
    memset(buf, (int) 0, bufSize);
    return (struct circular_Circular__2a867e0193ff634180614473) {.buffer = buf, .size = size, .head = (int) 0, .tail = (int) 0, .full = 0, .bufSize = bufSize};
}
