#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* get_op_func - returns a diferent function depending on the character provided
* @s: the character to be checked
* Return: a pointer to diferent functions depending on @s
* "+" return op_add function
* "-" return op_sub function
* "*" return op_mul function
* "/" return op_div function
* "%" return op_mod function
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (*(ops[i]).f);
		}
		i++;
	}
	return (NULL);
}
