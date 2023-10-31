#include "main.h"

/**
 * _strlen_recursion - renvoie la longueur d'une chaine de caractères
 * @s: chaine de caractères
 * Return: longueur de la chaine ou 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
