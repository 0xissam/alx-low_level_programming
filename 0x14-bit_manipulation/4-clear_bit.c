#include "main.h"

/**
 * clear_bit- sets the value of a bit to 0 at a given index.
 * @n:unsigned long int pointer
 * @index: bit's index.
 *
 * Return: 1 if it worked, else -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int u;

	if (index > (sizeof(unsigned int) * 8 - 1))

		return (-1);
	u = ~(1 << index);
	*n = *n & u;
	return (1);
}
