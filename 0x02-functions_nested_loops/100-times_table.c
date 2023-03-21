#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table starting from 0
 * @n: the highest number to multiply by
 *
 * Description: Prints the multiplication table up to n, starting from 0.
 * If n is greater than 15 or less than 0, the function does not print anything.
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return;

    int i, j, result;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            result = i * j;
            if (j == 0)
                printf("%d", result);
            else
                printf("\t%d", result);
        }
        printf("\n");
    }
}
