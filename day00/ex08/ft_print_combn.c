#include "../includes/day00.h"
/*
 NOTE: This function does not work as expected
*/

// This function is meant to print a combination of values wfor whatever combination size you specify
// if you specify the number 8, it will find all possible combinations for an 8 digit number
void    ft_print_combn(int n)
{
    int     comb_index = 0;
    int     comb[n];

    while(comb_index < n)
    {
        comb[comb_index++] = 0;
    }
    comb[comb_index - 1] = 1;
    comb_index = 0;

    while ((comb[n - n]) == 0)
    {
        while (comb_index <= n)
        {
            
            char    comb_elem = (comb[comb_index++] + '0');
            write(1, &comb_elem, 1);
            if (comb_index == n)
            {
                comb[n - 1]++;
                write(1, ", ", 2);
                comb_index = 0;
            }
            if (comb[n-1] > 9)
                return;
        }
    }
}