#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 *
 * @n: The number of times to print the table.
 *
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int i, j, res;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;

			if (j == 0)
				printf("%d", res);
			else
			{
				printf(", ");

				if (res < 10)
					printf("   ");
				else if (res < 100)
					printf("  ");
				else
					printf(" ");
				printf("%d", res);
			}
		}

		printf("\n");
	}
}
