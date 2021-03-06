#include "holberton.h"
#include <string.h>

/**
* _strchr - locates a character in a string
* @s: the string
* @c: the character to be checked
* Return: a pointer to the first occurrence of the character c
* in the string s, or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
	int p = 0;
	char *h;
	char *x;

	x = NULL;

	while (s[p] != '\0')
	{
		if (s[p] == c)
		{
			h = &s[p];
			return (h);
		}
		p++;
	}
	return (x);
}
