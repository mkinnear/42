#include "../includes/day01.h"

// This function sorts the integer values in the int array
void    ft_sort_int_tab(int     *tab, int   size)
{
    // We create 2 variables to keep track of the biggest value, and the smallest value
    int     tmp_bigger;
    int     tmp_smaller;

    // These 2 variables keep track of the index coming 0 to size, and the index coming from size to 0
    int     i;
    int     j;

    i = 0;
    j = size - 1;

    while (i < size && j != 0) // we loop while the 1st index is less than size and the last index is not equal to 0
    {
        if ((tab[i] > tab[i + 1]) && ((i + 1) != size)) // This condition checks if the element in i is bigger than the element in i + 1
        {
            tmp_bigger = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp_bigger;

        }
        if (tab[j] < tab[j - 1] && !((j - 1) < 0)) // This condition checks if the element in j is smaller than the element in the index j - 1
        {
            tmp_smaller = tab[j];
            tab[j] = tab[j - 1];
            tab[j - 1] = tmp_smaller;
        }
        if (j == 0 && i < size) // check if j has reached it's end but i still hasnt. This happens when the size of the array sums up to an odd number
            i++;
        else if(i == size && j > 0) // check if i has reached it's end but j still hasnt. This happens when the size of the array sums up to an odd number
            j--;
        else // Thisis meant to iterate through the array by incrementing i and decrementing j
        {
            i++;
            j--;
        }
    }
}