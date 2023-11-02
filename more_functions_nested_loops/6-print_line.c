#include "main.h"

/**
* print_line - trace une ligne droite dans le terminal
* @n: nombre de fois que le caractère "_" doit être imprimé
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1 ; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
