#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* *_strncpy - copie une chaîne de caractère.
* @dest: chaîne de destination.
* @src: chaîne dela source.
* @n: valeur
* Return: copie une chaîne de caractères.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
