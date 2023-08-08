#include "main.h"
#include <stdlib.h>

/**
 * create_array - This creates an array of chars
 * @size: This is the size of the array
 * @c: This is the char to be filled in array
 * Return: This returns a filled array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		s[a] = c;
	}

	return (s);
}
