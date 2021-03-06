#include "holberton.h"
#include<stdio.h>

/**
* _memset - fills memory with a constant byte
* @s: the memory to be changed
* @b: the constant byte is going to fill the memory
* @n: the first bytes that are going to change
* Return: a pointer to the memory area @s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p = 0;

	while (p < n)
	{
		s[p] = b;
		p++;
	}

	return (s);
}
