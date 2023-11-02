#include "main.h"

int prime_num(int n, int i);

/**
* is_prime_number - dit si un entier est un nombre premier ou non
* @n: nombre à évaluer
*
* Return: 1 si n est un nombre premier, sinon 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_num(n, n - 1));
}

/**
* prime_num - calcule si un nombre est premier de manière récursive
* @n: nombre à évaluer
* @i: iterateur
*
* Return: 1 si n est premier, sinon 0
*/

int prime_num(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0 && i > 0)
	{
		return (0);
	}
	else
	{
		return (prime_num(n, i - 1));
	}
}
