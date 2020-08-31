#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
int large(char *, char *, unsigned int);

/**
* string_nconcat - conecatenates two strings
* @s1: the first part of the new string
* @s2: the second part of the new string
* @n: the number of bytes of @s2 that will be in the new string
*
* Return: A pointer to a new string made of @s1, "n" bytes of @s2 and '\0'
* if malloc fails return NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dup;
	int f = 0;
	int x = 0;
	int y = 0;
	int lg;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	lg = large(s1, s2, n);

	printf("lg = %d\n", lg);

	dup = malloc(sizeof(*s1) * (lg + 1));

	if (dup == NULL)
		return (NULL);
	x = 0;
	y = 0;
	while (s1[x] != '\0')
	{
		dup[f] = s1[x];
		f++;
		x++;
	}
	while (n > 0 && s2[y] != '\0')
	{
		dup[f] = s2[y];
		f++;
		y++;
		n--;
	}
	dup[f] = '\0';
	printf("dup[f] = %c(%d)\n", dup[f], dup[f]);
	return (dup);
}

/**
* large - returns the sum of the large of @s1 and "n" bytes of s2
* @s1: the first string
* @s2: the second string
* @n: the number of bytes to sum from @s2
*
* Return: the sum of the large of he strings
*/
int large(char *s1, char *s2, unsigned int n)
{
	int x = 0;
	int y = 0;
	int lg = 0;

	while (s1[x] != '\0')
	{
		lg++;
		x++;
	}
	while (n > 0 && s2[y] != '\0')
	{
		lg++;
		y++;
		n--;
	}
	return (lg);
}
