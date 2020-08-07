#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals
* of a square matrix of integers
* @a: the array of integers
* @size: the size of the square matrix
*/

void print_diagsums(int *a, int size)
{
	int x = 0;
	int y = size + 1;
	int z = size - 1;
	int diagonal1 = 0;
	int diagonal2 = 0;

	while (x < size * size)
	{
		diagonal1 = diagonal1 + a[x];
		x = x + y;
	}

	x = z;

	while (x < size * size - z)
	{
		diagonal2 = diagonal2 + a[x];
		x = x + z;
	}
	printf("%d, %d\n", diagonal1, diagonal2);
}
