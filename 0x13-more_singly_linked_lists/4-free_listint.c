#include "lists.h"

/**
 * free_listint - Frees a linked list and sets the head pointer to NULL.
 *
 * @head: A pointer to the 1st node.
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;
	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
