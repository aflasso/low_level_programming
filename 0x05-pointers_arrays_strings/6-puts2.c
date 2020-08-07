#include "holberton.h"

/**
* puts2 - prints every other character of a string,
* starting with the first character
* @str: the string to be printed
*/

void puts2(char *str)
{
	int p = 0;

	while (str[p] != '\0')
	{
		if  (p  % 2 == 0 || p == 0)
		{
			_putchar(str[p]);
		}
		p++;
	}
	_putchar('\n');
}
