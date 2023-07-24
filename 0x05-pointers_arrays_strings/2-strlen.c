#include "main.h"
#include <stddef.h>

/**
 *_strlen - This returns the length of a string
 *@s: This is the string we are getting the length of
 *Return: This returns the length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}

