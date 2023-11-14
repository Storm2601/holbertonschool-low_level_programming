#include <stdlib.h>
#include "dog.h"

/**
* free_dog - libère la mémoire allouée à struct dog
* @d: libère struct dog
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
