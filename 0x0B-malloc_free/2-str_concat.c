#include <stdio.h>
#include <stdlib.h>
int large(char *);

/**
* str_concat - concatenates two strings
* @s1: the first part of the new string
* @s2: the second part of the new string
*
* Return: a pointer to the new string
*/
char *str_concat(char *s1, char *s2)
{
	int ps2 = 0;
	int p = 0;
	char *dup;
	int lg;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	lg = large(s1) + large(s2) + 1;

	dup = malloc(sizeof(*s1) * lg);


	while (s1[p] != '\0' && s1 != NULL)
	{
		dup[p] = s1[p];
		p++;
	}
	while (s2[ps2] != '\0' && s2 != NULL)
	{
		dup[p] = s2[ps2];
		p++;
		ps2++;
	}
	return (dup);
}

/**
* large - returns the large of a string
* @str: the string to be checked
*
* Return: the large of the @str string
*/
int large(char *str)
{
	int p = 0;
	int lg = 0;

	while (str[p] != '\0')
	{
		lg++;
		p++;
	}
	return (lg);
}
