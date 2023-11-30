#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - ajoute un nouveau noeud au début d'une liste chaînée
 * @head: double pointeur sur la liste list_t
 * @str: nouvelle chaîne à ajouter dans le noeud
 *
 * Return: l'adresse du nouvel élément, ou NULL en cas d'échec
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
