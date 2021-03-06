#include "holberton.h"

/**
* _abs - computes the absolute value of a integer
* @a: The number to be computed
*
* Return: The absolute value of the parameter
*/

int _abs(int a)
{
	if (a < 0)
	{
		a = a * -1;
		return (a);
	}
	else
	{
		return (a);
	}
}
