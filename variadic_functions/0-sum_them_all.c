#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - renvoie la somme de tous ses paramètres
*
* @n : premier paramètre
*
* Return: somme de tous les paramètres de la fonction
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap ;
	unsigned int i, sum = 0;

	si (n == 0)
		retour (0);
	va_start(ap, n);

	for (i = 0 ; i < n ; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (somme);
}
