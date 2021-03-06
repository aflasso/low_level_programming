#include "holberton.h"
#include <stdio.h>

/**
* _strpbrk - searchesa string for any of a set of bytes
* @s: the string where to search
* @accept: the set of bytes to search in @s
* Return: a poiter to the byte ib @s that matches one of the bytes in @accept,
* or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int b = 0;
	int p = 0;
	char *x;
	char *a;

	a = NULL;

	while (s[p] != '\0')
	{
		b = 0;

		while (s[p] != accept[b] && accept[b] != '\0')
		{
			b++;
		}
		if (s[p] == accept[b])
		{
			x = &s[p];

			return (x);
		}
		p++;
	}
	return (a);
}
