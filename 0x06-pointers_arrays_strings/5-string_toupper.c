#include "holberton.h"

/**
* string_toupper - changes the lowercase letters of a string to uppercase
* @s: the string to be change
* Return: a pointer to the final string
*/

char *string_toupper(char *s)
{
	int p = 0;

	while (s[p] != '\0')
	{
		if (s[p] >= 97 && s[p] <= 122)
		{
			s[p] = s[p] - 32;
		}
		p++;
	}
	return (s);
}
