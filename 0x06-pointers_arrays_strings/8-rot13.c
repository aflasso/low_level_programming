#include "holberton.h"
#include <stdio.h>

/**
* rot13 - encodes a string using "rot13"
* @s: The string to be encoded
* Return: A pointer to the final string
*/

char *rot13(char *s)
{
	char letters[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char letters2[] =
"AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm"
;
	int p = 0;
	int a = 0;
	int b = 0;

	while (s[p] != '\0')
	{

		if ((s[p] >= 65 && s[p] <= 90) || (s[p] >= 97 && s[p] <= 122))
		{
			a = 0;
			b = 0;
			while (s[p] != letters[a])
			{
				a++;
				b++;
			}
		s[p] = letters2[b + 26];
		}

		p++;
	}
	return (s);
}
