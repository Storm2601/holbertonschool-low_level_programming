#include <stdlib.h>
#include "dog.h"

/**
* init_dog - initialise une variable de type struct dog
* @d: pointeur sur la structure dog à initialiser
* @name: nom à initialiser
* @age: l'âge pour initialiser
* @owner: pour initialiser
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
