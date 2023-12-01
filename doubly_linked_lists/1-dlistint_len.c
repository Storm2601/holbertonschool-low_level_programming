#include "lists.h"

/**
 * dlistint_len - renvoie le nombre d'éléments d'une liste chaînée
 * @h: liste chaînée à parcourir de type listint_t
 *
 * Return: le nombre de noeuds
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;     /** initialisation variable */

	while (h)
	{
		num++;          /** incrémentation de ma variable. */
		h = h->next;    /** déplace le pointeur vers le prochain élément */
	}                   /** dans une structure de données chaînées. */

	return (num);       /** rétourne le nombre de noeuds. */
}
