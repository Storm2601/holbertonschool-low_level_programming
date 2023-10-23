#include "main.h"
#include <stdio.h>
/**
 * _strlen - renvoie la longueur d'une chaîne de caractères.
 * @s: la chaîne de l'adresse s
 * Return: valeur int
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; ++i)
		;
	return (i);
}
