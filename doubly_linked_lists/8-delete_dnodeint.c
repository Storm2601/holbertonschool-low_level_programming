#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete the node at index of a dlistint_t list.
 * @head: Pointer to the first node
 * @index: Index of the node to delete.
 * Return: 1 if successful, -1 fail.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;

		if (*head != NULL)
			(*head)->prev = NULL;

		free(tmp);
		return (1);
	}

	for (i = 0; i < index && tmp != NULL; i++)
		tmp = tmp->next;

	if (tmp == NULL)
		return (-1);

	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;

	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next;

	free(tmp);
	return (1);
}
