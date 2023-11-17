#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - imprime les nombres
* @separator: chaîne de caractères à imprimer entre les nombres
* @n: nombre d'int passés dans la fonction
*
* Return: rien
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(num, int));

		else if (separator && i == 0)
			printf("%d", va_arg(num, int));

		else
			printf("%s%d", separator, va_arg(num, int));
	}
	va_end(num);
	printf("\n");
}
