#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* free_grid - libère le tableau 2d
* @grid: Grille 2d
* @height: dimension de la hauteur de la grille
* Description: libère la mémoire de la grille
* Return: rien
*
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
