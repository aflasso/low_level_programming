#include "holberton.h"
#include <stdio.h>

/**
* print_to_98 - prints all natural numbers from the parameter to 98
* @n: The number since starts to print
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
		printf("\n");

	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}

		printf("\n");
	}
}
