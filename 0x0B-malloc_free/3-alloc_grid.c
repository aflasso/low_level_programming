#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @height: the number of rows in the array
* @width: the number of elements in each row
*
* Return: a pointer to the created 2 dimensional array
*/
int **alloc_grid(int width, int height)
{
	int x = 0;
	int y = 0;
	int **mat;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}


	mat = (int **) malloc(sizeof(*mat) * height);

	while (x < width - 2)
	{
		mat[x] = (int *) malloc(sizeof(int) * width);
		x++;
	}

	if (mat == NULL)
	{
		return (NULL);
	}

	x = 0;
	while (x != height)
	{
		y = 0;
		while (y != width)
		{
			mat[x][y] = 0;
			y++;
		}
		x++;
	}

	return (mat);
}
