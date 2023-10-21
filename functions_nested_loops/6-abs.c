#include "main.h"

/**
 * _abs - Calcule la valeur absolue d'un entier
 *
 * @n: L'entier dont on veut calculer la valeur absolue
 *
 * Return: La valeur absolue de l'entier n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
