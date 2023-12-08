#include "main.h"

/**
* clear_bit - met la valeur d'un bit à 0 à un index donné
* @n: pointeur sur un nombre
* @index: index
* Return: 1 si cela a fonctionné, -1 si une erreur s'est produite
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1 << index;

	unsigned int bit = sizeof(n) * 8 - 1;

	if (index > bit)
		return (-1);

	*n = *n & ~mask;

	return (1);
}

