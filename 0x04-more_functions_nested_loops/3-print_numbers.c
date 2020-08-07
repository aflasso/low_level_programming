#include "holberton.h"

/**
* print_numbers - prints the numbers from 0 to 9
*/

void print_numbers(void)
{
	int firstn = '0';

	while (firstn <= '9')
	{
		_putchar(firstn);
		firstn++;
	}
	_putchar('\n');
}
