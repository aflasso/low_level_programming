#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* op_add - returns a + b
* @a: the first digit
* @b: the second digit
*
* Return: a + b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - returns a - b
* @a: the digit to be subtract
* @b: the amount to be substract to @a
*
* Return: a - b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - returns a * b
* @a: the first factorial
* @b: the second factorial
*
* Return: a * b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - returns a / b
* @a: the dividend
* @b: the divisor
*
* Return: a / b
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - returns a % b
* @a: the dividend
* @b: the divisor
*
* Return: the remainder of a / b
*/
int op_mod(int a, int b)
{
	return (a % b);
}
