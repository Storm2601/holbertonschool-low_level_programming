#include "main.h"

/**
 * print_array - prints a pointer *a and n
 * followed by a new line
 * @a and @n : string to print the chars from
 */

char *_strcpy(char *dest, char *src)
{
	char *c = dest;

	while (*src)
		*dest++ = *src++;
	return (c);
}
