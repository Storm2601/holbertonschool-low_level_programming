#include "main.h"

/**
* _isdigit - vérifier la présence d'un chiffre
* @c: le caractère à vérifier
* Return: 1 si c est un chiffre, sinon 0
*/

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
