#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
int large(char *);

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: the string to be copied
*
* Return: a pointer to the duplicated string, or NULL if it fails
*/
char *_strdup(char *str)
{
	char *dup;
	int p = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	dup = malloc(sizeof(*str) * large(str) + 1);

	if (dup == NULL)
	{
		return (NULL);
	}

	while (p != large(str) + 1)
	{
		dup[p] = str[p];
		p++;
	}
	return (dup);


}

/**
* large - returns the large of a string
* @ary: the string to be checked
*
* Return: The large of the @ary string
*/
int large(char *ary)
{
	int b = 0;
	int lg = 0;

	while (ary[b] != '\0')
	{
		lg++;
		b++;
	}
	return (lg);
}
