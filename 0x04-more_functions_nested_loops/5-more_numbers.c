#include "holberton.h"

/**
* more_numbers - prints all numbers from  to 14
*/

void more_numbers(void)
{
	int firstn = '0';
	int lines = 0;

	while (lines < 10)
	{
		firstn = '0';

		while (firstn <= '9')
		{
			_putchar(firstn);
			firstn++;
		}
		firstn = '0';

		while (firstn <= '4')
		{
			_putchar('1');
			_putchar(firstn);
			firstn++;
		}
	_putchar('\n');
	lines++;

	}
}
