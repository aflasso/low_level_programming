#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
* @b: the number of bytes to allocated
*
* Return: A pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *dup;

	dup = malloc(b);

	if (dup == NULL)
	{
		exit(98);
	}
	return (dup);
}
