#include "main.h"

/**
* set_bit - fixe la valeur d'un bit à 1 à un indice donné
* @n: pointeur sur le nombre
* @index: index
* Return: 1 si cela a fonctionné ou -1 si une erreur s'est produite
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1 << index;

	unsigned int bit = sizeof(n) * 8 - 1;

	if (index > bit)
		return (-1);

	*n = *n | mask;

	return (1);
}

