#include "main.h"

/**
* more_numbers - imprimer 10 fois les nombres de 0 à 14
* suivie d'une nouvelle ligne
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)

				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');

		}
		_putchar('\n');
	}
}
