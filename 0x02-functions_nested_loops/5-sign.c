#include "holberton.h"

/**
* print_sign - prints the sign of a number 
* negative or zero
* @n: The number to be cheked
*
* Return: 1 if the number is positive, 0 if is negative. -1 otherwise
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
