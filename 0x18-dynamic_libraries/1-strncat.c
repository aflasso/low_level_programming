#include "holberton.h"
#include <stdio.h>

/**
*  _strncat - conectacates two strings
* @dest: the first part of the new strings
* @src: the second part of the string
* @n: The number of bytes of @src that will be added to @dest
* Return: A pointer to de final string
*/

char *_strncat(char *dest, char *src, int n)
{
	int pdest = 0;
	int psrc = 0;

	while (dest[pdest] != '\0')
	{
		pdest++;
	}

	while (n > 0)
	{
		if (src[psrc] != '\0')
		{
			dest[pdest] = src[psrc];
			pdest++;
			psrc++;
		}
		n--;
	}

	return (dest);
}
