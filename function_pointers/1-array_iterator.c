#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - exécute une fonction donnée en paramètre
 * sur chaque élément d'un tableau
 *
 * @array : tableau d'entiers sur lequel la fonction va itérer
 * @size : combien d'éléments dans le tableau
 * @action : pointeur de fonction qui prend un entier en argument et ne renvoie
 * rien
 *
 * Return : void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
