#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 * @b: Pointing to a string of 0 and 1 chars
 * Return: binary convert or NULL if one char of b is != O or 1
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int convert_binary = 0;
	int index = 0;

	if (b == NULL)
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] != '1' && b[index] != '0')
		{
			return (0);
		}

		convert_binary = convert_binary * 2 + (b[index] - '0');
		index++;
	}

	return (convert_binary);
}
