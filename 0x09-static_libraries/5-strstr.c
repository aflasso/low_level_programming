#include "holberton.h"
#include <stdio.h>

/**
* _strstr - locates a substring
* @haystack: the string where to search
* @needle: the substring to be search
* Return: a pointer to the beginning of the located substring,
* or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	int f = 0;
	int z;
	int large = 0;
	int p = 0;
	int b = 0;
	char *x;
	char *y = NULL;

	while (needle[b] != '\0')
	{
		large++;
		b++;
	}

	b = 0;

	while (haystack[p] != '\0')
	{
		while (haystack[p] == needle[b] && needle[b] != '\0')
		{
			b++;
		}
		p++;
		if (needle[b] == '\0' && f != 1)
		{
			z = p - b - 1;
			f++;
		}
	}
	if (large == b)
	{
		x = &haystack[z];
		return (x);
	}
	return (y);
}
