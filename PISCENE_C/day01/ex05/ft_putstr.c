#include "../includes/day01.h"

// This function prints the null terminated string passed as a parameter
void    ft_putstr(char  *str)
{
    int     i;

    i = -1;
    while(str[++i])
    {
        write(1, (str + i), 1); // Prints each character from the character array
    }
}