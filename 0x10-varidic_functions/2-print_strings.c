#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
* print_strings - prints strings
* @separator: the character between each string
* @n: the number of strings to be printed
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	int x = n;
	char *s;

	va_start(str, n);

	while (x > 0)
	{
		s = va_arg(str, char *);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}

		if (!(separator == NULL) && x != 1)
		{
			printf("%s", separator);
		}
		x--;
	}
	va_end(str);
	printf("\n");
}
