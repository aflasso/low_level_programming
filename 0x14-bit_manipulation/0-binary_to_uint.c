#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: the binary to be converted.
 * Return: if there is one or more chars
 * in the string b that is not 0 or 1, or if b is NULL, return 0.
 * Otherwise return the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int p = 0;
	int dec = 0;
	int exp = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[p] != '\0')
	{
		if (b[p] != '1' && b[p] != '0')
		{
			return (0);
		}
		p++;
	}

	while (p > 0)
	{
		dec += _pow(2, exp) * (b[p - 1] - '0');
		exp++;
		p--;
	}
	return (dec);
}

/**
 * _pow - returns the power of a number
 * @base: the base.
 * @exp: the exponent.
 * Return: the power of the base
 */
int _pow(int base, int exp)
{
	int p = exp;
	int result = 1;

	while (p > 0)
	{
		result = result * base;
		p--;
	}

	return (result);
}
