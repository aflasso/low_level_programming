#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions."

/**
* sum_them_all - returns the sum of all its parameters
* @n: the number of digits to be sumed
*
* Return: the sum of all its parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	int res = 0;
	int x = n;
	va_list sum;

	if (n == 0)
	{
		return (0);
	}

	va_start(sum, n);

	while (x > 0)
	{
		res = res + va_arg(sum, int);
		x--;
	}

	va_end(sum);

	return (res);
}
