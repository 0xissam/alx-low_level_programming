#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, c;
	int a = 1, b = 2;

	printf("%d, %d, ", a, b);

	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		printf("%d", c);
		a = b;
		b = c;
		if (i != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
