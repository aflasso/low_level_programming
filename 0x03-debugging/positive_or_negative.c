#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints if a random number is positive negative or zero
* Return: Always 0
*/
int positive_or_negative(int i)
{

				if (i > 0)
				{
					printf("%d is positive\n", i);
				}
				if (i == 0)
				{
				printf("%d is zero\n", i);
				}
				if (i < 0)
				{
					printf("%d is negative\n", i);
				}
					return (0);
}
