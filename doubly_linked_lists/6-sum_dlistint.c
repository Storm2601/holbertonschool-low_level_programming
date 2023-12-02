#include "lists.h"

/**
* sum_dlistint - renvoie la somme de toutes les données de la liste
* @head: tête de liste
* Return: somme de toutes les données de la liste
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	dlistint_t *ptr;

	ptr = head;

	if (head == NULL)
	return (0);

	while (ptr != NULL)
	{
		sum += ptr->n; /* ajoute la valeur de n du noeud actuel à la somme sum */
		ptr = ptr->next;    /* parcour chaque élément de la liste et accumule */
	}                       /* la valeur de ptr->n  sans sum. */
	return (sum);
}
