#include "main.h"

/**
* _strcmp - compare deux chaînes de caractères
* @s1: valeur d'entrée
* @s2: valeur d'entrée
*
* Return: s1[i] - s2[i]
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[1] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
