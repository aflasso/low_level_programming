#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - allocates memory for an array using malloc
* @nmeb: the number of elemnts to the array
* @size: the size in bytes if the elements
*
* Return: A pointer to the allocated memory. If nmmeb or size = 0
* return NULL, also if malloc fails return NULL
*/
void *_calloc(unsigned int nmeb, unsigned int size)
{
	void *dup;

	if (nmeb == 0 || size == 0)
	{
		return (NULL);
	}

	dup = malloc(size * nmeb);

	if (dup == NULL)
	{
		return (NULL);
	}
	return (dup);
}
