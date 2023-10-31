#include "main.h"

/**
 * factorial - fonction qui retourne la factorielle d'un nombre donné
 * @n: nombre à calculer
 *
 * Return: (-1), 1 ou factorielle
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	else
		return (n * factorial(n - 1));
}
