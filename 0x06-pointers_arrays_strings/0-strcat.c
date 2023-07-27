#include "main.h"

/**
 * _strcat - This concatenates two strings
 * @src: This is the first source string
 * @dest: This is the destination string
 * Return: This returns a pointer to the resulting string destination
 */

char *_strcat(char *dest, char *src)

{
	int dlen = 0, j;

	while (dest[dlen])
	{
		dlen++;
	}

	for (j = 0; src[j] != 0; j++)
	{
		dest[dlen] = src[j];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
