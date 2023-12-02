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
		*head = (*head)->next; /* pointeur vers le prochain élément de la */
/* liste et assigne la valeur à head,déplace head vers l'élément suivant */
		if (*head != NULL)
			(*head)->prev = NULL;

		free(tmp);  /* libère la mémoire de tmp */
		return (1);
	}

	for (i = 0; i < index && tmp != NULL; i++)
		tmp = tmp->next; /* maj de tmp avec l'adresse mémoire de l'élément */
    /* suivant dans la liste */
	if (tmp == NULL)
		return (-1);

	if (tmp->next != NULL) /* vérifie si l'élément de tmp existe, cela veut */
		tmp->next->prev = tmp->prev;    /* qu'il y a 1 élément après. */
/* signifie que le pointeur prev de l'élément suivant de tmp est modifié */
	if (tmp->prev != NULL) /* pour pointer vers l'élément précédent de tmp. */
		tmp->prev->next = tmp->next;	/* supprime tmp de la liste en */
/* réajustant les pointers pour pointer vers l'élément suivant après tmp */
	free(tmp);  /* libère tmp */
	return (1);
}
