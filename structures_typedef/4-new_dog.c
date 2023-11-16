#include <stdlib.h>
#include "dog.h"

/**
* _strdup - renvoie un pointeur sur une nouvelle chaîne qui est
* un duplicata de la chaîne str
*
* @str: chaîne à dupliquer
*
* Return: pointeur sur la chaîne dupliquée ou null si la mémoire
* disponible est insuffisante
*/

char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int j = 0;

	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	str2 = malloc(sizeof(char) * (i + 1));

	if (str2 == NULL)
	{
		return (NULL);
	}

	while (str[j] != '\0')
	{
		str2[j] = str[j];
		j++;
	}
	str2[j] = 0;
	return (str2);
}

/**
* new_dog - créer un new dog
*
* @name: pointer sur le nom du dog
* @age: age du dog
* @owner: pointeur sur le propriétaire du dog
*
* Return: pointeur sur la nouvelle chaîne ou NULL en cas d'échec
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *new_name;
	char *new_owner;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new_name = _strdup(name);
	if (new_name == NULL)
	{
		free(new);
		return (NULL);
	}
	new_owner = _strdup(owner);
	if (new_owner == NULL)
	{
		free(new_name);
		free(new);
		return (NULL);
	}

	new->name = new_name;
	new->age = age;
	new->owner = new_owner;

	return (new);
}
