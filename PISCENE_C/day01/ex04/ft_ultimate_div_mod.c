#include "../includes/day01.h"

// This function devides the values passed by it's parameters, and then stores the modulous of the 2 values withing the 2nd parameter
// before reinitializing the 1st parameter with the result from the divion.
void    ft_ultimate_div_mod(int *a, int *b)
{
    if (*b != 0)
    {
        int tmp;
        
        tmp = *a / *b;
        *b = *a % *b;
        *a = tmp;
    }
}