#include "holberton.h"
#include <stdio.h>

/**
* set_string - sets the value of a pointer to a char
* @s: the value of the pinter
* @to: the char
*/

void set_string(char **s, char *to)
{
	*s = to;
}
