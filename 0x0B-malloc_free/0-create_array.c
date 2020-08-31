#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
* create_array - creates an array of chars,
* and initializes it with a specific char
* @size: the number of elements the new array will have
* @c: the specific char that will be initialized in the array
* Return: a pointer to the created array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int p = 0;
	char *str;

	if (size > 0)
	{
		str = malloc(sizeof(*str) * size);
	}

	while (p != size)
	{
		str[p] = c;
		p++;
	}

	return (str);
}
