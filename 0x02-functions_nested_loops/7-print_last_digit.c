#include "holberton.h"

/**
* print_last_digit - prints the last digit of a number
* @a: the number to print the last digit
*
* Return: The value of the last digit
*/

int print_last_digit(int a)
{
	int x = a % 10;

	if (x < 0)
	{
		x = x * -1;
		_putchar(x + '0');
		return (x);
	}
	else
	{
		_putchar(x + '0');
		return (x);
	}
}
