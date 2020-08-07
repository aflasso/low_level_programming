#include "holberton.h"

/**
* print_most_numbers - prints numbers from 0 to 9 exept of 2 and 4
*/

void print_most_numbers(void)
{
	int firstn = '0';

	while (firstn <= '9')
	{
		if (firstn != '2' && firstn != '4')
		{
			_putchar(firstn);
		}
		firstn++;
	}
	_putchar('\n');
}
