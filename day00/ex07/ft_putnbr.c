#include "../includes/day00.h"

// This funtion prints numbers as ascii caharaters.
// Values that are bigger than 9 needs to be broken doesn into single digit values and printed
void    ft_putnbr(int nb)
{
    if (nb == -2147483648) // This is the minimum value an integer can have. anything less than this will implicitly convert the integer into a long
    {
        write(1, "-2147483648", 11);
    }
    else if (nb < 0)
    {
        write(1, "-", 1);
        ft_putnbr((nb * -1));
    }
    else if (nb >= 10) // We use the base of 10 to divide all numbers greater than 10 into printable characters.
    {
        ft_putnbr(nb / 10); // because we use the numertic rule of base 10, we divide the value by 10
        char mod = (nb % 10) + '0'; // We then use modulo 10 to get the 1 number in the value. the + '0' is meant to convert the integer to an ascii value
        write(1, &mod, 1);
    }
    else
    {
        char num = nb + '0';
        write(1, &num, 1);
    }
}