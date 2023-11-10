#include <stdlib.h>
#include "main.h"

/**
* *array_range - crée un tableau d'entiers
* @min: plage minimale de valeurs stockées
* @max: plage maximale de valeurs stockées et nombre d'éléments
*
* Return: pointeur sur le nouveau tableau
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
