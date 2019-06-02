#include "main.h"

int main()
{
    __kit_init();
    {
        struct circular_Circular__2a867e0193ff634180614473 myCirc = circular_Circular_2a867e0193ff634180614473__new((int) 10,
                                                                                                                    kit_mem__mallocator);
        circular_Circular_2a867e0193ff634180614473__mapGet(&myCirc,
                                                           circular__printInt,
                                                           (int) 0);
        printf((char *) "---\n");
        circular_Circular_2a867e0193ff634180614473__set(&myCirc,
                                                        (int) 10,
                                                        (int) 0);
        circular_Circular_2a867e0193ff634180614473__set(&myCirc,
                                                        (int) 9,
                                                        (int) 0);
        circular_Circular_2a867e0193ff634180614473__set(&myCirc,
                                                        (int) 8,
                                                        (int) 0);
        circular_Circular_2a867e0193ff634180614473__set(&myCirc,
                                                        (int) 7,
                                                        (int) 0);
        circular_Circular_2a867e0193ff634180614473__set(&myCirc,
                                                        (int) 6,
                                                        (int) 0);
        circular_Circular_2a867e0193ff634180614473__set(&myCirc,
                                                        (int) 5,
                                                        (int) 0);
        circular_Circular_2a867e0193ff634180614473__set(&myCirc,
                                                        (int) 4,
                                                        (int) 0);
        circular_Circular_2a867e0193ff634180614473__set(&myCirc,
                                                        (int) 3,
                                                        (int) 0);
        circular_Circular_2a867e0193ff634180614473__set(&myCirc,
                                                        (int) 2,
                                                        (int) 0);
        circular_Circular_2a867e0193ff634180614473__set(&myCirc,
                                                        (int) 1,
                                                        (int) 0);
        circular_Circular_2a867e0193ff634180614473__mapGet(&myCirc,
                                                           circular__printInt,
                                                           (int) 0);
        printf((char *) "%s\n",
               circular_Circular_2a867e0193ff634180614473__isFull(&myCirc) ? (char *) "full" : (char *) "empty");
        printf((char *) "---\n");
        circular_Circular_2a867e0193ff634180614473__reset(&myCirc);
        circular_Circular_2a867e0193ff634180614473__mapGet(&myCirc,
                                                           circular__printInt,
                                                           (int) 0);
        printf((char *) "---\n");
        circular_Circular_2a867e0193ff634180614473__resetWipeBuffer(&myCirc);
        circular_Circular_2a867e0193ff634180614473__mapGet(&myCirc,
                                                           circular__printInt,
                                                           (int) 0);
        printf((char *) "---\n");
        circular_Circular_2a867e0193ff634180614473__set(&myCirc,
                                                        (int) 10,
                                                        (int) 0);
        circular_Circular_2a867e0193ff634180614473__set(&myCirc,
                                                        (int) 9,
                                                        (int) 0);
        circular_Circular_2a867e0193ff634180614473__set(&myCirc,
                                                        (int) 8,
                                                        (int) 0);
        circular_Circular_2a867e0193ff634180614473__set(&myCirc,
                                                        (int) 7,
                                                        (int) 0);
        circular_Circular_2a867e0193ff634180614473__set(&myCirc,
                                                        (int) 6,
                                                        (int) 0);
        circular_Circular_2a867e0193ff634180614473__set(&myCirc,
                                                        (int) 5,
                                                        (int) 0);
        circular_Circular_2a867e0193ff634180614473__set(&myCirc,
                                                        (int) 4,
                                                        (int) 0);
        circular_Circular_2a867e0193ff634180614473__set(&myCirc,
                                                        (int) 3,
                                                        (int) 0);
        circular_Circular_2a867e0193ff634180614473__set(&myCirc,
                                                        (int) 2,
                                                        (int) 0);
        circular_Circular_2a867e0193ff634180614473__set(&myCirc,
                                                        (int) 1,
                                                        (int) 0);
        circular_Circular_2a867e0193ff634180614473__mapGet(&myCirc,
                                                           circular__printInt,
                                                           (int) 0);
        printf((char *) "---\n");
        circular_Circular_2a867e0193ff634180614473__mapSet(&myCirc,
                                                           circular__mult,
                                                           (int) 3,
                                                           (int) 0);
        circular_Circular_2a867e0193ff634180614473__mapGet(&myCirc,
                                                           circular__printInt,
                                                           (int) 0);
        printf((char *) "---\n");
    }
    return 0;
}
