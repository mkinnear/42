#include "../includes/day00.h"

// This function prints all combinations of a 3 digit value
void    ft_print_comb(void)
{
    // We structure the numbers as Ones, Tens and Hundreds for the 1st , 2nd and last digit respectively
    int     ones = 48;
    int     tens = ones + 1;
    int     hundreds = tens + 1;

// Each value combination can only be used once. meaning if 123 is printed. 321, or 231 and other variations of the combination cant be used
    while (ones <= 55)
    {
        write(1, &ones, 1);
        write(1, &tens, 1);
        write(1, &hundreds, 1);
        if (!(ones == 55 && tens == 56 && hundreds == 57))
            write(1, ", ", 2);
        hundreds++;
        if (hundreds > 57)
        {
            tens++;
            hundreds = tens + 1;
        }
        if (tens > 56)
        {
            ones++;
            tens = ones + 1;
            hundreds = tens + 1;
        }
        if (ones > 55)
        {
            return;
        }
    }
}
