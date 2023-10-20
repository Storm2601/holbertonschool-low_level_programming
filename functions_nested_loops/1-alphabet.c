#include "main.h"

/**
* print_alphabet - imprime l'alphabet de a à z en minuscule
*
* Description: 'the program's description'
*
* Return: Always 0 (Success)
*/

void print_alphabet(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
