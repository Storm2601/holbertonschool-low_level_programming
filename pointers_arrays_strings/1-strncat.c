#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* *_strncat - une fonction qui concatène deux chaînes de caractères.
* @dest: la chaîne de destination
* @src: la chaîne de la source
* @n: variable
* Return: valeur de la chaîne
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
