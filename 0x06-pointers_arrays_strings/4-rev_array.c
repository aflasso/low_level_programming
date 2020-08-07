#include "holberton.h"

/**
* reverse_array - reverse the content of an array of integers
* @a: the array of integers
* @n: the number of elements of the array
*/

void reverse_array(int *a, int n)
{
	int temporal;
	int left = 0;
	int right = n - 1;

	while (left < n / 2)
	{
		temporal = a[left];
		a[left] = a[right];
		a[right] = temporal;
		left++;
		right--;

	}
}
