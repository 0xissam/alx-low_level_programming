#include "main.h"
/**
 * _memcpy- copies memory area.
 * @dest: estination
 * @src: source
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *psrc = src;
	char *pdest = dest;

	while (n-- > 0)
	{
		*pdest++ = *psrc++;
	}

	return (dest);
}
