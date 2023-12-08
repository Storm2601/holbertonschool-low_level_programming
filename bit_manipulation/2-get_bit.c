#include "main.h"

/**
* get_bit -renvoie la valeur d'un bit à un index donné
* @n: int à partir duquel le bit est pris
* @index: index
* Return: valeur du bit à l'indice index ou -1
* si une erreur s'est produite
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 1;

	unsigned int bit = sizeof(n) * 8 - 1;

	if (index > bit)
		return (-1);

	i = i << index;

	if (n & i)
		return (1);

	else
		return (0);
}

