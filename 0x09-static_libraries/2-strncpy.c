#include "holberton.h"
#include <stdio.h>

/**
* _strncpy - copies a string
* @dest: - the string were is going to be copied
* @src: the string that is going to be copied
* @n: the number of bytes of @src that are going to be copied
* Return: A pointer to the final string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int pdest = 0;
	int psrc = 0;

	while (n > 0)
	{
		if (dest[pdest] != '\0')
		{
			dest[pdest] = src[psrc];
			if (src[psrc] != '\0')
			{
				psrc++;
			}
			pdest++;
		}
		n--;
	}
	return (dest);
}
