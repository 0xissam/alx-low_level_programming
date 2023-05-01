#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*print_listint - function that prints all the elements of a listint_t list.
*@h: Pointer to the 1st node
*Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
