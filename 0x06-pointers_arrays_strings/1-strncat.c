#include "main.h"

/**
 * _strncat - This function concatenates two strings
 * @src: This is the source string
 * @dest: This is the destination string
 * @n: The number of bytes from src to be used in dest
 * Return: This returns the pointer to the destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
