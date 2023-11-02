#include "main.h"

/**
* _isupper - vérifier la présence d'une majuscule
* @c: le caractère à vérifier
* Return: 1 si c est une majuscule, sinon 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
