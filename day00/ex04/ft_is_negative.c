#include "../includes/day00.h"

// This function determines whether the int parameter passed to it is a negative value or a positive value
// then prints P for a positive value and N for a negative value
void    ft_is_negative(int n)
{
    if (n >= 0 || n == NULL) // condition checks if the parameter n is bigger or equal to 0 - it then prints P for positive
        write(1, "P", 1);
    else // If the value is not bigger or equal to 0 then it must be a negative value - it then prints N for negative
        write(1, "N", 1);
}