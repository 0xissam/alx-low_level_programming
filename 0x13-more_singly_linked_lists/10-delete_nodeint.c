#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position
 * @head: A pointer to the 1st node
 * @index: index of the node to be deleted
 * Return: 1 if successful, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *ptr;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index - 1 && temp->next; i++)
		temp = temp->next;
	if (temp->next == NULL)
	{
		return (-1);
	}
	ptr = temp->next->next;
	free(temp->next);
	temp->next = ptr;
	return (1);
}
