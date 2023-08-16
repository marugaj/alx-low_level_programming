#include "function_pointers.h"

/**
 * array_iterator - executes function given parameter on each element of array
 * @array: This is the array
 * @size: This is the size of the array
 * @action: This is a pointer to function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
