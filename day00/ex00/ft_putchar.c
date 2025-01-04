#include "../includes/day00.h"

// This function writes the character passed to it
void    ft_putchar(char c)
{
    write(1, &c, 1); // This function uses file descriptor 1 (typically used for console output) and takes in a voud* as well as the number of elements to print
}