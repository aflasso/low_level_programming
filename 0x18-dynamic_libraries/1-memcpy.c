#include "holberton.h"
#include <stdio.h>

/**
* _memcpy - copies memory area
* @dest: the string to be changed
* @src: the string to be copied
* @n: the number of bytes that are going to be copied of @src
* Return: A pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p = 0;

	while (p < n)
	{
		dest[p] = src[p];
		p++;
	}
	return (dest);
}
