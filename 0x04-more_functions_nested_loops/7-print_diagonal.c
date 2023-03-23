#include "main.h"

/**
  * print_diagonal - draws a diagonal line
  * @n: the number of lines
  *
  * Return: void
  */

void print_diagonal(int n)
{
	int i = 0;
	int k = 0;

	if (n > 0)
	{
		while (i < n)
		{
			k = i;
			while (k)
			{
				_putchar(' ');
				k--;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
