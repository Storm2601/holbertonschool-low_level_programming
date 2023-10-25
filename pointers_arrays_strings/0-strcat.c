#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcat - une fonction qui concatène deux chaînes de caractères.
 * @dest: la chaîne
 * @src: la chaîne
 * Return: valeur de la chaîne
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
