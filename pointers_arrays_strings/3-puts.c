#include "main.h"
#include <stdio.h>
/**
 *  _puts - renvoie une chaîne de caractères
 *
 * @str: la chaîne de l'addresse str
 * Return: void
 */
void _puts(char *str)
{
	int i;

	while (*(str + i)  != '\0') {
		_putchar(*str[i]);
		i++;
	}
}
