#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory using
* @b: quantité d'octets
*
* Return: pointeur sur la mémoire allouée
* Si malloc échoue, le statut est égal à 98
*/

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
