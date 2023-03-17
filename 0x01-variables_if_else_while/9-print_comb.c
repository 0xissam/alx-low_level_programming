#include <stdio.h>

/**
 * main - prints all possible combinations
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('9\n');
	return (0);
}
