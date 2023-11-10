#include "main.h"

/**
* reverse_array - tableau inverse d'entiers
* @a: tableau
* @n: nombre d'éléments du tableau
*
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i, t, end;

	end = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[end];
		a[end] = t;
		end--;
	}
}
