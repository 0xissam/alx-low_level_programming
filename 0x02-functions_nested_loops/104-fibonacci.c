#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long a = 0, b = 1, c;
	unsigned long d, e, f, j;
	unsigned long k, l;

	for (count = 0; count < 92; count++)
	{
		c = a + b;
		printf("%lu, ",c);
		a = b;
		b = c;
	}
	d = a / 10000000000;
	f = b / 10000000000;
	e = a % 10000000000;
	j = b % 10000000000;
	for (count = 93; count < 99; count++)
	{
		k = d + f;
		l = e = j;
		if (d + j > 10000000000)
		{
			k += 1;
			l %= 10000000000;

		}
		printf("%lu%lu",k , l);
		if (count != 98)
		{
			printf(", ");
			d = f;
			e = j;
			f = k;
			j = l;
		}
	}
	printf("\n");
	return (0);
}
