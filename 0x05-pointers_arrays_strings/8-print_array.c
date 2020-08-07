#include "holberton.h"
#include <stdio.h>

/**
* print_array - prints 'n' elements of an array of integers
* @a: the array with the elements to be printed
* @n: the number of elements of the array to be printed
*/

void print_array(int *a, int n)
{
	int p = 0;

	while (n > 0)
	{
		printf("%d", a[p]);
		if (n - 1 != 0)
		{
			printf(", ");
		}
		n--;
		p++;
	}
	printf("\n");
}
