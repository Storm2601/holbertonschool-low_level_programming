#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie deux nombres
 * @argc : nombre d'arguments
 * @argv : tableau d'arguments
 *
 * Return : renvoie 0 si cela ne fonctionne pas return error
 */

int main(int argc, char **argv)
{
	int product ;

	if (argc != 3)
	{
		printf("Erreur") ;
		return (1) ;
	}
	product = atoi(argv[1]) * atoi(argv[2]) ;
	printf("%d\n", product) ;
	return (0) ;
}
