#include "main.h"
#include <stdio.h>

/**
* main - imprime son nom suivi d'une nouvelle ligne
* @argc: nombre d'arguments
* @argv: tableau d'arguments
*
* Return: renvoie 0 s'il fonctionne
*/

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
