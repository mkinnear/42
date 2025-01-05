#include    "../includes/day01.h"

// This function devides 2 values only if the denominator is not 0, and then initializes a variable for it's modulous value as well
void    ft_div_mod(int  *a, int *b, int *div, int   *mod)
{
    if (*b != 0) // This condition makes sure that equation does not happen if the denominator is 0
    {
        *div = *a / *b;
        *mod = *a % *b;
    }
}