#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node with a specified integer value
 * at the specified index in a linked list.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 * @idx: The index at which to insert the new node.
 * @n: The integer value to assign to the new node.
 *
 * Return: A pointer to the newly inserted node
 * or NULL if the insertion failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *temp;
	unsigned int i;

	if (!head)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	temp = *head;
	for (i = 0; i < idx - 1 && temp; i++)
		temp = temp->next;
	if (temp == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->next = temp->next;
	temp->next = ptr;
	return (ptr);
}
