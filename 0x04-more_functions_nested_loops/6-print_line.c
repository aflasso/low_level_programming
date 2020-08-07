#include "holberton.h"

/**
* print_line - prints straight
* @n: The number of times the character '_' is printed
*/

void print_line(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
			_putchar('\n');
	}
}
