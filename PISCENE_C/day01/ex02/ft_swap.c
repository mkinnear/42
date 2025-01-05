#include "../includes/day01.h"

// This function swaps 2 values. Using pointers to dereference and change the variable's values we eliminate the use of return statements
void    ft_swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}