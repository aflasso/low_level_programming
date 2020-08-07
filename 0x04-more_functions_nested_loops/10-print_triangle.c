#include "holberton.h"

/**
* print_triangle - prints a triangle on the terminal
* @size: The size of the triangle
*/

void print_triangle(int size)
{
	int high = size;
	int spaces = high - 1;
	int triangle;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (high > 0)
		{
			spaces = high - 1;
			while (spaces != 0)  /** imprime los espacios */
			{
				_putchar(' ');
				spaces--;
			}
			triangle = (size - high) + 1;
			while (triangle != 0)	/** imprime los '#' */
			{
				_putchar('#');
				triangle--;

			}

			_putchar('\n');
			high--;
		}
	}
}
