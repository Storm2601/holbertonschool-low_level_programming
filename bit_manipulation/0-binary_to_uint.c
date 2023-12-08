#include "main.h"

/**
* binary_to_uint - convertit un nombre binaire en un int non signé
* @b: pointeur sur une chaîne de 0 et 1 caractère
* Return: le nombre converti ou 0 s'il y a un caractère qui n'est pas
* 0 et pas 1 dans b ou si b est NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0')
		{
			result = (result << 1) | 0;
		}
		else if (*b == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
	    b++;
	}
	return (result);
}
