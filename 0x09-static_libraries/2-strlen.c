#include "holberton.h"
#include <stdio.h>

/**
* _strlen - returns the length of a string
* @s: the string to be checked
* Return: the length of the string
*/

int _strlen(char *s)
{
	int posicion = 0;
	int large = 0;

	while (s[posicion] != '\0')
	{
		large++;
		posicion++;
	}



	return (large);
}
