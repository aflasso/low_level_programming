#include "holberton.h"

/**
* print_diagonal - prints a diagonal line on the terminal
* @n: The number of times the character '\' is printed
*/

void print_diagonal(int n)
{
	int spaces = 0;
	int times = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			times = 0;
			while (spaces != times)
			{
				_putchar(' ');
				times++;

			}

			_putchar('\\');
			_putchar('\n');
			n--;
			spaces++;

		}
	}
}
