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
        struct circular_Circular__d97396f78a21e2b65e21df12 myCircStr = circular_Circular_d97396f78a21e2b65e21df12__new((int) 4,
                                                                                                                       kit_mem__mallocator);
        circular_Circular_d97396f78a21e2b65e21df12__set(&myCircStr,
                                                        kitten_stringbuilder_StringBuilder__newFromString((char *) "hello world",
                                                                                                          (int) 0),
                                                        (int) 0);
        circular_Circular_d97396f78a21e2b65e21df12__set(&myCircStr,
                                                        kitten_stringbuilder_StringBuilder__newFromString((char *) "foo bar",
                                                                                                          (int) 0),
                                                        (int) 0);
        circular_Circular_d97396f78a21e2b65e21df12__set(&myCircStr,
                                                        kitten_stringbuilder_StringBuilder__newFromString((char *) "aaaaaaaaa",
                                                                                                          (int) 0),
                                                        (int) 0);
        circular_Circular_d97396f78a21e2b65e21df12__set(&myCircStr,
                                                        kitten_stringbuilder_StringBuilder__newFromString((char *) "blah",
                                                                                                          (int) 0),
                                                        (int) 0);
        circular_Circular_d97396f78a21e2b65e21df12__mapGet(&myCircStr,
                                                           circular__printSB,
                                                           (int) 0);
        printf((char *) "---\n");
        circular_Circular_d97396f78a21e2b65e21df12__mapSet(&myCircStr,
                                                           circular__appendSB,
                                                           kitten_stringbuilder_StringBuilder__newFromString((char *) ". WHOA this is cool!",
                                                                                                             (int) 0),
                                                           (int) 0);
        circular_Circular_d97396f78a21e2b65e21df12__mapGet(&myCircStr,
                                                           circular__printSB,
                                                           (int) 0);
        printf((char *) "---\n");
        circular_Circular_d97396f78a21e2b65e21df12__mapSet(&myCircStr,
                                                           circular__appendSB,
                                                           kitten_stringbuilder_StringBuilder__newFromString((char *) " It's a bit of a hack though because I can't mutate them in place.",
                                                                                                             (int) 0),
                                                           (int) 0);
        circular_Circular_d97396f78a21e2b65e21df12__mapGet(&myCircStr,
                                                           circular__printSB,
                                                           (int) 0);
    }
    return 0;
}
