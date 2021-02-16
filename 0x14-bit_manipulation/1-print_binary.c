#include "holberton.h"

/**
 * print_binary - printsi de binary representation of a number
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	unsigned long int x = 1;
	unsigned long int y = 0;
	unsigned long int large = 0;

	if (n == 0)
	{
		__putchar(48);
	}

	while (y < n)
	{
		y += n & x;
		x = x << 1;
		large++;
	}

	while (large > 0)
	{
		if (n & (1 << (large - 1)))
		{
			__putchar(49);
			large--;
		}
		else
		{
			__putchar(48);
			large--;
		}
	}
}
