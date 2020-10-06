#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
void func_int(va_list a);
void func_char(va_list a);
void func_float(va_list a);
void func_string(va_list a);

/**
* print_all - prints anything
* @format: a list of types of arguments
*/
void print_all(const char * const format, ...)
{
	va_list arguments;
	int x = 0;
	int i;

	form_t ops[] = {
		{"i", func_int},
		{"c", func_char},
		{"f", func_float},
		{"s", func_string},
		{NULL, NULL}
	};

	va_start(arguments, format);

	while (format[x] != '\0')
	{
		if (format[x] == 'c' ||
		format[x] == 'i' ||
		format[x] == 'f' ||
		format[x] == 's')
		{
			i = 0;
			while (format[x] != *(ops[i]).op)
			{
				i++;
			}
			ops[i].f(arguments);
			if (format[x + 1] != '\0')
			{
				printf(", ");
			}
		}

		x++;
	}
	va_end(arguments);
	printf("\n");
}

/**
* func_int - prints an int parameter
* @a: the int parameter to be printed
*/
void func_int(va_list a)
{
	printf("%d", va_arg(a, int));
}

/**
* func_char - prints a char parameter
* @a: the char parameter to be printed
*/
void func_char(va_list a)
{
	printf("%c", va_arg(a, int));
}

/**
* func_float - prints a float parameter
* @a: the float parameter to be printed
*/
void func_float(va_list a)
{
	printf("%f", va_arg(a, double));
}

/**
* func_string - prints a string parameter
* @a: the string parameter to be printed
*/
void func_string(va_list a)
{
	char *s;

	s = va_arg(a, char *);

	if (s == NULL)
	{
		printf("(nil)");
	}
}
