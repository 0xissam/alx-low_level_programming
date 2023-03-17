#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1 = 0, num2;

	while (num1 <= 8)
	{
		num2 = num1 + 1;
		while (num2 <= 9)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');

			if (num1 != 8 || num2 != 9)
			{
				putchar(',');
				putchar(' ');
			}

			num2++;
		}
		num1++;
	}
	putchar('\n');

	return (0);
}

