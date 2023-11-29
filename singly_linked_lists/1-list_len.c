#include <stdlib.h>
#include "lists.h"

/**
 * list_len - renvoie le nombre d'éléments d'une liste chaînée
 * @h: pointeur sur la liste list_t list
 *
 * Return: nombre d'éléments dans h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
