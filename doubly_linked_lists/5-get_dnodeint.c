#include "lists.h"

/**
* get_dnodeint_at_index - renvoie le nième nœud de la liste
* @head: tête de liste
* @index: indice du noeud
* Return: le nième oeud d'une liste
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int num = 0;

	ptr = head;

	if (head == NULL)
	return (NULL);

	while (ptr != NULL)
	{
		if (num == index)
		{
			return (ptr);
		}
		num++;
		ptr = ptr->next;
	}
	return (NULL);
}
