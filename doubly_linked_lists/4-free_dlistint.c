#include "lists.h"

/**
* free_dlistint - libère la liste
* @head: tête de liste
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
