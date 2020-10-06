#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - executes a function on each element of an array
* @array: The aray
* @size: The size of the array
* @action: the function to be execute on each element
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int p = 0;

	if (size <= 0)
	{
		exit(-1);
	}
	if (array == NULL)
	{
		exit(-1);
	}
	while (size != 0)
	{
		action(array[p]);
		size--;
		p++;
	}
}
