#include "holberton.h"
#include <stdio.h>

/**

*/

char *_strcpy(char *dest, char *src)
{
	int p = 0;

	while (src[p] != '\0')
	{
		dest[p] = src[p];
		p++;
	}

	return (dest);
 
}
