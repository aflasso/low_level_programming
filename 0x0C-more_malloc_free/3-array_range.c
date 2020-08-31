#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - crates an array of integers
* @min: The first element of the array
* @max: The last element of the array
*
* Return: A pointer to the array
*/
int *array_range(int min, int max)
{
	int *dup;
	int x = 0;

	if (min > max)
	{
		return (NULL);
	}

	dup = malloc(sizeof(int) * (max + 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	while (min <= max)
	{
		dup[x] = min;
		x++;
		min++;
	}
	return (dup);
}
