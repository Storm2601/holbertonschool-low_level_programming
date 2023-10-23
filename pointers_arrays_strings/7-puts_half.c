#include "main.h"

/**
 * puts_half - print the second half of a string
 * @str: string to print
 */
void puts_half(char *str)
{
	int i;
	int y;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	if (i % 2 == 0)
	{
		y = i / 2;
	}
	else
	{
		y = (i + 1) / 2;
	}

	for (; y < i; y++)
	{
		_putchar(str[y]);
	}

	_putchar('\n');
}
