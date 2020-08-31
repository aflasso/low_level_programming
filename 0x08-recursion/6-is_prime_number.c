#include "holberton.h"
#include <stdio.h>
int prime(int, int);

/**
* is_prime_number - checks if the input integer is a prime number
* @n: the number to be checked
* Return: 1 if @n is a prime number otherwise return 0
*/
int is_prime_number(int n)
{
	return (prime(n, n - 1));
}

/**
* prime - checks if the input integer is a prime number
* @n: the number to be checked
* @div: the posible divisors of @n
* Return: 1 if @n is a prime number otherwise return 0
*/
int prime(int n, int div)
{
	if (div == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	if (div == 2 && n % div == 1)
	{
		return (1);
	}

	return (prime(n, div - 1));
}
