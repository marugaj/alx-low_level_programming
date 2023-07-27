#include "main.h"

/**
 * _strncpy - This is a function that copies a string
 * @dest: This is the buffer that will store the string
 * @src: This is the source string
 * @n: This is the maximum umber of bytes to be copied from src
 * Return: This returns the pointer to the resulting string destination
 */

char *_strncpy(char *dest, char *src, int n)

{
	int index = 0, src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_len; index < n; index++)
	dest[index] = '\0';
	return (dest);
}
