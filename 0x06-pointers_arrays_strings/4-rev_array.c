#include "main.h"

/**
 * reverse_array - A function that reverses the content of an array
 * This is an array of integers
 * @n: The number of elements in the array
 * @a: This is the array of integers
 */

void reverse_array(int *a, int n)

{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
	tmp = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = tmp;
	}
}
