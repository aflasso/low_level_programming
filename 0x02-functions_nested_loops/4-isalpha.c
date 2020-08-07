#include "holberton.h"

/**
* _isalpha - checks if a charcacter is alphabetic
* @c: The character to be checked
*
* Return: 0 if the character is alphabetic. 1 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
