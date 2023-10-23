#include "main.h"
/**
 * swap_int - échange les valeurs de deux entiers.
 *@a: la valeur de l'adresse a
 *@b: la valeur de l'adresse b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
