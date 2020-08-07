#include "holberton.h"
#include <stdio.h>

/**
* cap_string - capitalize all words of a string
* @s: the string to be changed
* Return: A pointer to the final string
*/

char *cap_string(char *s)
{
	int p = 0;
	int next;



	while (s[p] != '\0')
	{
		next = p + 1;
		if (s[p] == 32 ||
		s[p] == 9 ||
		s[p] == 10 ||
		s[p] == 33 ||
		s[p] == 44 ||
		s[p] == 46 ||
		s[p] == 59 ||
		s[p] == 63 ||
		s[p] == 34 ||
		s[p] == 40 ||
		s[p] == 41 ||
		s[p] == 123 ||
		s[p] == 125)
		{
			if (s[next] >= 97 && s[next] <= 122)
			{
				s[next] = s[next] - 32;
			}
		}
		p++;
	}
	return (s);
}
