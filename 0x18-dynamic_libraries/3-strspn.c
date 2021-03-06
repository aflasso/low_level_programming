#include "holberton.h"

/**
* _strspn - gets the length of a prefix substring.
* @s: the string
* @accept: The character to be checked
* Return: the number of bytes in the initial segment of s
* which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int t = 0;
	int p = 0;
	int b = 0;

	while (s[p] != '\0')
	{
		b = 0;

		while (s[p] != accept[b] && accept[b] != '\0')
		{
			b++;
		}

		if (s[p] == accept[b])
		{
			t++;
		}
		else
		{
			return (t);
		}
		p++;
	}
	return (t);
}
