#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* int_index - search fot a integer
* @array: the array of integers
* @size: the size of the arra
* @cmp: function that compares the elements with a specific characteristic
*
* Return: The position in the array of the element founded. if its no founded
* return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int p = 0;

	if (size <= 0)
	{
		return (-1);
	}
	while (size != 0)
	{
		if (cmp(array[p]) != 0)
		{
			return (p);
		}
		p++;
		size--;
	}
	return (-1);
}
