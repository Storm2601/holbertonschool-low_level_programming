#include <stdio.h>
#include "lists.h"

/**
 * print_list - imprime tous les éléments d'une liste chaînée
 * @h: pointeur sur la liste list_t à imprimer
 *
 * Return: le nombre de noeuds
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
/**
 * if (!h->str) printf("[0] (nil)\n);: Vérifie si le champ str de la structure
 * actuelle pointée par h est nul. Si c'est le cas, imprime "[0] (nil)"
 * (indicatif d'une chaîne vide ou nulle).
 * Sinon, passe à l'instruction suivante
 *
 * else printf("[u] s\n", h->len, h->str);: Si le champ str n'est pas nul,
 * imprime la longueur de la chaîne (h->len)
 * suivie de la chaîne elle-même (h->str)
 *
 * h = h->next déplce le pointer vers le prochain élément de la liste
 */
