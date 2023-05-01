#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*listint_len - returns the number of elements in a linked listint_t list.
*@h: Pointer to the 1st node
*Return: the number of nodes
*/
size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
