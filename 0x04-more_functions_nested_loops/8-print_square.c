#include "holberton.h"

/**
* print_square - prints a square in the terminal
* @size: The size of the suare
*/

void print_square(int size)
{
	int high = size;
	int width = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (high > 0)
		{
			width = size;
			while (width > 0)
			{
				_putchar('#');
				width--;

			}


			_putchar('\n');
			high--;
		}



	}
}
