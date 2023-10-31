#include "main.h"
#include <stdio.h>

/**
* _puts_recursion - fonction qui affiche une chaîne de caractères
* @s: chaîne de caractères
* Return: Always 0 (Success)
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
