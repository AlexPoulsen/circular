#include "main.h"

double kit_random__random()
{
    return (double) rand() / RAND_MAX;
}

void kit_random__seed(unsigned int seed)
{
    srand(seed);
}

int kit_random__randomRange(int min, int max)
{
    return min + (int) (((int) 1 + max - min) * kit_random__random());
}
