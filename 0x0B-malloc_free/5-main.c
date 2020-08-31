#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
	char *s;

	s = argstostr(0, NULL);
	if (s == NULL)
	{
		return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}
