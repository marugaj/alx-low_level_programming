#include "main.h"

/**
 * swap_int - This swaps the values of two integers
 *@a: The first integer that is to be swapped
 *@b: The second integer that is to be swapped
 * Return: This will return nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
