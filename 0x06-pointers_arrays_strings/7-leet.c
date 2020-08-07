#include "holberton.h"
#include <stdio.h>

/**
* leet - encodes a string into "1337"
* @s: the string to be encoded
* Return: A pointer to the final string
*/

char *leet(char *s)
{
	int letter[10] = { 'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	int number[] = {'4', '3', '0', '7', '1'};
	int p = 0;
	int a = 0;

	while (s[p] != '\0')
	{
		a = 0;

		while (s[p] == 'A' ||
		s[p] == 'a' ||
		s[p] == 'E' ||
		s[p] == 'e' ||
		s[p] == 'O' ||
		s[p] == 'o' ||
		s[p] == 'T' ||
		s[p] == 't' ||
		s[p] == 'L' ||
		s[p] == 'l')
		{
			if (s[p] == letter[a])
			{
				s[p] = number[a / 2];
			}
			a++;
		}
		p++;

	}
	return (s);
}
