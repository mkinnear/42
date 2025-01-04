#include "../includes/day00.h"

// This function prints the alphabet in Uppercase
void    ft_print_alphabet(void)
{
    int i = 97; // initializing the int i with the ascii value for 'A'

    while (i <= 122) // iterates to the value 122 which is the ascii value for 'Z'
    {
        write(1, &i, 1); // uses the write function to print each ascii value character
        i++;
    }
}