#include "holberton.h"

/**
* print_alphabet - prints the alphabet
* in lowercase.
* Return: Always 0:
*/

void print_alphabet(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

