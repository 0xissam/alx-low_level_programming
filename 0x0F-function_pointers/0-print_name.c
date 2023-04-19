#include <stdio.h>
#include "function_pointers.h"

/**
*print_name - functions that prints a name
* @name: The name
*@f: Pointer to function
*Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
