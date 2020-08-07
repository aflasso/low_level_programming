#include "holberton.h"
#include <stdio.h>

/**
* _strcat - conecatenates two strings
* @dest: The first part of the new string
* @src: The secpnd part of the new string
* Return: A pointer to de resulting string.
*/

char *_strcat(char *dest, char *src)
{
	int pdest = 0;
	int psrc = 0;

	while (dest[pdest] != '\0')
	{
		pdest++;
	}
	while (src[psrc] != '\0')
	{
		dest[pdest] = src[psrc];
		pdest++;
		psrc++;
	}

	return (dest);
}
