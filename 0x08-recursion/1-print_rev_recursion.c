#include "holberton.h"
#include <stdio.h>

/**
* _print_rev_recursion - prints a string in revers
* @s: the string to be printed
*/

void _print_rev_recursion(char *s)
{
	if (*(s + 1) != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	_putchar(*s);
}
