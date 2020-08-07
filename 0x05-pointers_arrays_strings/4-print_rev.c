#include "holberton.h"

/**
* print_rev - prints a strin gin reverse
@s: the string to be printed
*/

void print_rev(char *s)
{
	int times = 0;

	while (s[0] != 0)
	{
		s++;
		times++;
	}

	while (times > 0)
	{
		_putchar(s[0]);
		times--;
		s--;
	}
	_putchar('\n');
}
