#include "main.h"

/**
* print_binary - imprime la représentation binaire d'un nombre
* @n: nombre à imprimer en binaire
*/
void print_binary(unsigned long int n)
{
	int i = 0;

	int bit = sizeof(n) * 8 - 1;

	if (n == 0)
		_putchar('0');

	while (bit >= 0)
	{
		if (n >> bit & 1)
		{
			_putchar('1');
			i++;
		}
		else if (i)
			_putchar('0');
		bit--;
	}
}

