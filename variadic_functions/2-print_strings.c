#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - imprime les chaînes de caractères
*
* @separator: chaîne de caractères à imprimer
* entre les chaînes de caractères
*
* @n: nombre de chaînes passées à la fonction
*
* Return: rien
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ch;

	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		ch = va_arg(str, char *);

		if (!ch)
			ch = "(nil)";

		if (!separator)
			printf("%s", ch);

		else if (separator && i == 0)
			printf("%s", ch);

		else
			printf("%s%s", separator, ch);
	}
	printf("\n");
	va_end(str);
}
