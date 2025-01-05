#include "../includes/day01.h"

// This function prints each character passed to it
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

// This function prints each element from the character array passed to it
void    ft_putstr(char  *str)
{
    int     i;

    i = 0;
    while(str[i])
    {
        ft_putchar(str[i++]);
    }
}

// This Function takes a number as a parameter and converts it into an ascii value so it can be printed to the screen
void    ft_putnbr(int   nbr)
{
    if (nbr == -2147483648) // This is the minimum value an int can store before it is implicitly converted into a long int
    {
        ft_putstr("-2147483648"); //we use the ft_putstr function to print the number as a string in a character array
    }
    else if (nbr >= -2147483648 && nbr < 0) // This condition finds negarive values between the minimum negative value and -1;
    {
        ft_putchar('-');
        ft_putnbr((nbr * -1)); // we multiply the negative value with -1 to convert it to a positive value and then calls the ft_putnbr function to do recursion
    }
    else if(nbr > 9)
    {
        ft_putnbr((nbr / 10)); // We use the recursive method and pass the nbr / 10 because we are using numeric values that are foverned by the numeric rule of base 10
        ft_putnbr((nbr % 10)); // We then find the modulo of each number to provide us with the 1st value in a digit that has 2 or more values like 10, 100, 1000, etc...
    }
    else{
        ft_putchar((nbr + '0')); // Each value that has gone through the else if condition of with values greater than 9 are broken down to a single value that we can
                                 // print using it's ascii value
    }
}

// This function prints the 1st parameter's integer elements in reverse order
// The 2nd parameter specifies the size of the 1st parameter which is an int array
void    ft_rev_int_tab(int  *tab, int   size)
{
    while(--size >= 0)
    {
        ft_putnbr(tab[size]); // for each iteration we use the ft_putnbr function to preint integers as ascii values.
    }   
}