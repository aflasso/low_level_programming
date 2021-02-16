#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the number to be changed.
 * @index: the position of the bit starting with 0.
 * Return: 1 if it worked, -1 if an error ocurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x = 1;

	if (*n & (x << index))
	{
		*n = *n ^ (x << index);
		return (1);
	}
	else
	{
		*n = *n & (x << index);
		return (1);
	}
	return (-1);
}
