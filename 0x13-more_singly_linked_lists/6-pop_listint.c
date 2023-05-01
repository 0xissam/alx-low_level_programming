#include "lists.h"

/**
 * pop_listint - Removes the first node from a linked list
 * and returns its integer value.
 *
 * @head: A pointer to the 1st node
 *
 * Return: The integer value of the first node on success, or 0 on failure.
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr;

	if (!*head)
		return (0);
	ptr = *head;
	n = ptr->n;
	*head = ptr->next;
	free(ptr);
	return (n);
}
