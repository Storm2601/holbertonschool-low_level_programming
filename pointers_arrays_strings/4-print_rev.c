#include "main.h"

/**
 * print_rev - imprimer une chaîne de caractères en sens inverse
 * @s: chaîne de caractères à imprimer
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	i = i - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
