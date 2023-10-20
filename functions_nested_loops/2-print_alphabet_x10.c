#include "main.h"

/**
* print_alphabet_x10 - imprime l'alphabet de a à z en minuscule 10 fois
*
* Description: 'the program's description'
*
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
