#include "main.h"
/**
 * get_bit -  function that returns the value of a bit at a given index.
 * @n: numbers
 * @index: index
 * Return: the value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value;
	unsigned long  int mask = 1UL << index;

	if (index > 64)
		return (-1);
	value = (n & mask) >> index;
	return (value);
}
