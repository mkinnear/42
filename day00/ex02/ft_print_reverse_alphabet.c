#include "../includes/day00.h"

// This function prints the alphabet in revers order
void    ft_print_reverse_alphabet(void)
{
    int i = 122; // We initialize i with the 122 ascii value which prints the character 'Z'

    while(i >= 97)
    {
        write(1, &i, 1); // use the write function to print each ascii character value to the console output using file descriptor 1
        i--;
    }
}