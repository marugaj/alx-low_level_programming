#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer in array of integers
 * @size: The number of elements in the array
 * @cmp: A pointer to the function to be used to compare values
 * @array: This is the array of integers
 * Returns: returns -1 if no element matches
 * return -1 if size <= 0
 * if otherwise, return index of first element for which
 * the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
