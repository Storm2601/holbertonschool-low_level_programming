#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Insert new node at the position given
 * @h: Pointer to the first node
 * @idx: Index where the new node is create
 * @n: Value for the new node
 *
 * Return: adress of new node or NULL id fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	tmp = *h;

	for (i = 0; i < idx - 1 && tmp != NULL; i++)
		tmp = tmp->next;

	if (tmp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = new_node;

	new_node->prev = tmp;
	tmp->next = new_node;
	return (new_node);
}
