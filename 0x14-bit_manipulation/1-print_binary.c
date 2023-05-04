#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int value = 0;

	while (mask)
	{
		if ((n & mask) || value || mask == 1)
		{
			_putchar((n & mask) ? '1' : '0');
			value = 1;
		}
		mask >>= 1;
	}
}
