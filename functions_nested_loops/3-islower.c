#include "main.h"

/**
* _islower - vérifie la présence de caractères minuscules.
*
* @c: character check
*
* Return: Always 0 (Success)
*/

int _islower(int c)

{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
