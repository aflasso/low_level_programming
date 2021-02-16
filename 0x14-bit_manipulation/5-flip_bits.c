#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: the first number.
 * @m: the second number.
 * Return: the number of flips you need to get to the second number
 * from de first number.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long x = 0;
	unsigned long y = 1;
	unsigned long flips = 0;
	unsigned long int dif = n ^ m;

	while (x < dif)
	{
		x += dif & y;

		if (dif & y)
		{
			flips++;
		}
		y = y << 1;
	}
	return (flips);
}
