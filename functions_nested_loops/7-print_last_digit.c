#include <limits.h>
#include "main.h"

/**
 * print_last_digit - Imprime la dernière chiffre d'un nombre
 *
 * @n: Le nombre dont vous voulez imprimer la dernière chiffre
 *
 * Return: La valeur de la dernière chiffre
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		(last_digit = -n % 10);
	}
	else
	{
		(last_digit = n % 10);
	}

	_putchar('0' + last_digit);

	return (last_digit);
}
