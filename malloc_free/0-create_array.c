#include "main.h"
#include <stdlib.h>
/**
* create_array - crée un tableau de taille size et lui assigne char c
* @size: taille du tableau
* @c: char à assigner
* Description: créer un tableau de taille size et lui assigner char c
* Return: pointeur sur le tableau, NULL en cas d'échec
*
**/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
