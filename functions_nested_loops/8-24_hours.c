#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Imprime la dernière chiffre d'un nombre
 *
 * void jack_bauer(void);: imprime l'heure de 00:00 à 23:59
 *
 * Return: La valeur du dernier chiffre
 */

void jack_bauer(void)
{
	int hour, minute;
	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			printf("%.2d:%.2d\n", hour, minute);
			if (hour == 23 && minute == 59)
			{
				return;

				jack_bauer();
				return (0);
			}
		}
	}
}
