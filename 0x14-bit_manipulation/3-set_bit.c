#include "holberton.h"
#include <stdio.h>

/**
 * set_bit - sets de value of a bit to 1 at a given index.
 * @n: the number to be changed.
 * @index: the position of the bit to be changed strating from 0.
 * Return: 1 if it worked, -1 if an error ocurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (*n | (x << index))
	{
		*n = *n | (x << index);
		return (1);

	}

	return (-1);
}
