#include "holberton.h"

/**
* factorial - returns the factorial of a given number
* @n: the given number
* Return: the factorial of @n
*/

int factorial(int n)
{
	if (n > 0)
	{
		if (n == 0 || n == 1)
		{
			return (1);
		}
		else
		{
			return (n * factorial(n - 1));
		}
	}
	else
		return (-1);
}
