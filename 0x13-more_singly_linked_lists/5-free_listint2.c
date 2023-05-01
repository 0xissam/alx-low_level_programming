#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets the head pointer to NULL.
 *
 * @head: A pointer to the 1st node.
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (!head || !*head)
		return;
	ptr = *head;
	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
}
