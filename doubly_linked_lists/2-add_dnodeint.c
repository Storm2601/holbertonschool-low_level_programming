#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));   /** allocation de mémoire pour new */
		return (NULL);

	new->n = n;     /** affecte la valeur n à n pointé par new */
	new->prev = NULL;
	h = *head;  /** initialise nouveau pointer sans modif la valeur de head */

	if (h != NULL)
	{
		while (h->prev != NULL) /** parcour la liste cha^née en remontant */
			h = h->prev;    /** depuis 1 élément quelconque vers 1 élément */
	}

	new->next = h;

	if (h != NULL)
		h->prev = new;  /** affecte la veleur new a prev pointé par h */

	*head = new;        /** pointer head est égal à new */

	return (new);
}
