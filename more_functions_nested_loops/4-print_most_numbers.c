#include "main.h"

/**
* print_most_numbers - imprime les chiffres de 0 à 9
* sans le 2 et le 4
* Return: Always 0
*/

void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50)
		{
			if (c != 52)
			{
				_putchar(c);
			}
		}
	}
	_putchar('\n');
}
