#include "holberton.h"

/**
* puts_half - prints the second half of a string
* @str: The string to be printed
*/

void puts_half(char *str)
{
	int p = 0;
	int large = 0;

	while (str[p] != '\0')
	{
		large++;
		p++;
	}


	if (large % 2 == 0)
	{
		p = large / 2;
		while (p != large)
		{
			_putchar(str[p]);
			p++;
		}
		_putchar('\n');
	}

	else if (large % 2 == 1)
	{
		p = (((large - 1) / 2) + 1);
		while (p != large)
		{
			_putchar(str[p]);
			p++;
		}
		_putchar('\n');
	}
}
