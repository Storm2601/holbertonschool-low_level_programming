#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of the list
* @head: head of the list
* @n: data
* Return: address of the new element or NULL if it fails
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->prev = NULL;
	new->n = n;
	new->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
