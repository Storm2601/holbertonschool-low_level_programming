#include "main.h"

/**
 * _atoi - start of the program
 *
 * @s: string to be extracted from
 *
 * Return: return the number from the string
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
