#include "holberton.h"
#include <stdio.h>
int _sqrt(int, int);

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: the number
* Return: the natural square root of @n if the number is more than zero.
* otherwise return -1
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (_sqrt(n, 0));
	}
}

/**
* _sqrt - finds the natural square root of a number if it has it
* @n: the number
* @init: the posible natural square root of @n
* Return: the natural square root of @n if exist. otherwise return -1
*/

int _sqrt(int n, int init)
{
	if (init * init == n)
	{
		return (init);
	}
	if (init * init > n)
	{
		return (-1);
	}
	return (_sqrt(n, init + 1));
}
