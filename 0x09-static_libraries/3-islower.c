#include "holberton.h"
/**
* _islower - checks if a character is lowercase.
* @c: The character to be checked
*
* Return: 0 if the character is uppercase. 1 otherwise
*/

int _islower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
