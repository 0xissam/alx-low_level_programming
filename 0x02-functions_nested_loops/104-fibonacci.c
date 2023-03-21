#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned int a = 1, b = 2, c;
	int count = 0;

	printf("%u, %u", a, b);
	while (count < 90)
	{
		c = a + b;
		printf("%lu", c);
		a = b;
		b = c;
		count++;
		if (count != 96)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
