#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - prints numbers
* @separator: the character between each digit
* @n: the number of digits to be printed
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x = n;
	va_list num;

	va_start(num, n);

		while (x > 0)
		{
			printf("%d", va_arg(num, int));
			if (!(separator ==  NULL) && x != 1)
			{
				printf("%s", separator);
			}
			x--;
		}
	va_end(num);
	printf("\n");
}
