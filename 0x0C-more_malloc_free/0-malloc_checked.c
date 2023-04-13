#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: argument
 * Return: void
 */

void *malloc_checked(unsigned int b)
{

int *p;


	p = malloc(b);

	if (!p)
	{

		exit(98);
	}

	return (p);
}
