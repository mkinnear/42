#include "../includes/day00.h"

// This function prints 2 variations of combinations at the same time. practically a 4 digit combination
void    ft_print_comb2(void)
{
    char    set2[2] = {'0', '1'}; 
    char    set1[2] = {'0', '0'};

    while (!(set1[0]== '9' && set1[1]== '9'))
    {
        
        while (set2[0] <= '9' && set2[1] <= '9')
        {
            write(1, &(set1[0]), 1);
            write(1, &(set1[1]), 1);
            write(1, " ", 1);
            write(1, &(set2[0]), 1);
            write(1, &(set2[1]), 1);
            if (!(set1[0] == '9' && set1[1] == '9') && !(set2[0] == '9' && set2[1] == '9'))
                write(1, ", ", 2);
            if (set2[1] == '9')
            {
                set2[1] = '0';
                set2[0]++;
            }
            set2[1]++;
        }
        
        if (set1[1] != '9')
        {
            set1[1]++;
            set2[1] = set1[1] + 1;
            set2[0] = '0';
        }
        else
        {
            set1[0]++;
            set1[1] = '0';
            set2[0] = '0';
            set2[1] = set1[1] + 1;
        }
    }
}