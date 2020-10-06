#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - prints a name
* @name: the name to be printed
* @f: the function to print the name
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		exit(-1);
	}
	if (name == NULL)
	{
		exit(-1);
	}
	f(name);
}
