#include "main.h"

/**
 * _strcpy - copie la chaîne pointée par src dans le tampon dest
 * @dest: destination de la copie
 * @src: source de la copie
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
