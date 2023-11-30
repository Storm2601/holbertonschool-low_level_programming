#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - ajoute un nouveau noeud à la fin d'une liste chaînée
 * @head: double pointeur sur la liste list_t
 * @str: chaîne de caractères à placer dans le nouveau noeud
 *
 * Return: adresse du nouvel élément, ou NULL en cas d'échec
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
