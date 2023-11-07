#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - renvoie un pointeur sur un tableau d'entiers à 2 dimensions
* @width: largeur de la grille
* @height: hauteur de la grille
*
* Return: un pointeur sur un tableau 2D d'int ou NULL en cas d'échec
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;
	int k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			grid[j][k] = 0;
		}
	}
	return (grid);
}
