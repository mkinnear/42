#include    "../includes/day01.h"

// This function returns the length of a string passed as a parameter
int     ft_strlen(char  *str)
{
    int i;

    i = 0;
    while (str[i]) // this while loop iterates through every element until it reaches the null terminator
    {
        i++; // for each element, the variable i is incremented by 1;
    }
    return (i); // The incremented value is then returned
}