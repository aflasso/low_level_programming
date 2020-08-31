#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - frees a 2 dimensional grid of integers
* @grid: the array to be free
* @height: the number of row the array @grid has
*/
void free_grid(int **grid, int height)
{
	int x = 0;


	while (x != height)
	{
		free(grid[x]);
		x++;
	}

	free(grid);

}
