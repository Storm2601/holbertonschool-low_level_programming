#include <stdlib.h>
#include "dog.h"

/**
* _strlen - renvoie la longueur d'une chaîne de caractères
* @s: chaîne de caractères à évaluer
*
* Return: la longueur de la chaîne
*/
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
* *_strcpy - copie la chaîne de caractères pointée par src
* y compris l'octet nul de fin (\0)
* dans le tampon pointé par dest
* @dest: pointeur sur le tampon dans lequel nous copions
* la chaîne de caractères
* @src: chaîne à copier
*
* Return: le pointeur sur dest
*/
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
* new_dog - crée un nouveau chien
* @name: nom du chien
* @age: âge du chien
* @owner: propriétaire du chien
*
* Return: pointeur sur le nouveau chien (Success), sinon NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
