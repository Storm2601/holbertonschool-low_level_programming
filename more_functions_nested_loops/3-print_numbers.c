#include "main.h"

/**
* print_numbers - contrôle des chiffres de (0 to 9)
*
* Return: always 0
*/

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
