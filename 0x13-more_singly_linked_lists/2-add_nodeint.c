#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a node in the end of list
 * @head: pointer to the 1st node
 * @n: data
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
