#include "../includes/day00.h"

// This function prints numbers 0 to 9
void    ft_print_numbers(void)
{
    int i = 48; // We initialize i with the ascii value 48 which is the caracter '0'

    while(i <= 57) // we iterate to the character value '9'
    {
        write(1, &i, 1);
        i++;
    }
}

