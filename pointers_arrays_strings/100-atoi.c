#include "main.h"

/**
 * _atoi - début du programme
 *
 * @s: chaîne de caractères à extraire de
 *
 * Return: renvoie le nombre à partir de la chaîne de caractères
 */

int _atoi(char *s)
{
	int PosNegDet = 0;
	int PosNeg;
	int Digit;
	int Result = 0;

	for (; (*s < 47 || *s > 58) && (*s != '\0'); s++)
	{
		if (*s == 45)
			PosNegDet++;
	}

	for (; (*s > 47 && *s < 58) && (*s != '\0'); s++)
	{
		Digit = *s - '0';
		Result = Result * 10 - Digit;
	}

	PosNeg = (PosNegDet % 2 == 0) ? -1 : 1;

	return (PosNeg * Result);
}
