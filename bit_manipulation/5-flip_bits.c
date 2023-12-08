#include "main.h"

/**
* flip_bits - renvoie le nombre de bits qu'il faut retourner
* pour passer d'un nombre à un autrer
* @n: nombre 1
* @m: nombre 2
* Return: nombre de bits nécessaires
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;

	int count = 0;

	while (xor)
	{
		count++;
		xor &= (xor - 1);
	}
	return (count);
}

git 