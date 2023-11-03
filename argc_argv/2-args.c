#include "main.h"
#include <stdio.h>

/**
* main - imprimer tous les arguments
* @argc: nombre d'arguments
* @argv: tableau d'arguments
*
* Return: retourne 0
*/

int main(int argc, char **argv)
{
	int i = 0;

	while (i++ < argc)
		printf("%s\n", *argv++);
	return (0);
}
