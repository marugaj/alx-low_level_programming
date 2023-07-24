#include "main.h"

/**
 * print_array - This printselements of an array of integers
 * @n: The number of elements of the array to be printed
 * @a: This is the array of integers
 * Return: Will return nothing
 */

void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
	printf("%d", a[d]);

	if (d != (n - 1));
	{
	printf(", ");
	}
	}
	printf('\n');
}
