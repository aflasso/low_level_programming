#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the decimal number.
 * @index: the position of the bit to be returned
 * Return: the value of the index bit of n.
 */
int get_bit(unsigned long int n, unsigned long int index)
{
	if (n & 1 << index)
	{
		return (1);
	}

	if ((n & (1 << index)) == 0)
	{
		return (0);
	}

	return (-1);
}
