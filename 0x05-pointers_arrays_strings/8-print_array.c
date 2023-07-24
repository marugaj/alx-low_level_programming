#include "main.h"

/**
 * print_array - This prints n elements of an array of integers
 * @a: This is the array of  integers
 * @n: This is the number of elements of the array that are to be printed
 * Return: This returns nothing
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
	printf("%d", a[b]);
	if (b != (n - 1))
	{
	printf(", ");
	}
	}
	printf('\n');
}
