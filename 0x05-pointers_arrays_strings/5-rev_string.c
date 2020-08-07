#include "holberton.h"
#include <stdio.h>

/**
* rev_string - reverse a string
* @s: the string to be reversed
*/

void rev_string(char *s)
{
	int posicion = 0;
	char temporal;
	int large = 0;
	int left = 0;
	int right = 0;

	while (s[posicion] != '\0')

	{
		large++;
		posicion++;
		right++;
	}

	right--;

	while (left < large / 2)
	{
		temporal = s[left];
		s[left] = s[right];
		s[right] = temporal;
		left++;
		right--;


	}

}

