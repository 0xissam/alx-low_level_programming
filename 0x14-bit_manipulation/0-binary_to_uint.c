#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binary number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;
	const char *c;

	if (b == NULL)
	{
		return (0);
	}

	for (c = b; *c != '\0'; ++c)
	{
		if (*c == '0')
		{
			bin <<= 1;
		} else if (*c == '1')
		{
			bin = (bin << 1) | 1;
		}
		else
		{
			return (0);
		}

		if (bin > UINT_MAX)
		{
			return (0);
		}
	}

	return (bin);
}
