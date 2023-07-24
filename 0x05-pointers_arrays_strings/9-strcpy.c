#include "main.h"

/**
 * _strcpy - this copies the string pointed to
 * @dest: This is the destination value
 * @src: This is the source value
 * Return: This returns the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
	dest[a] = src[a];
	}
	dest[a++] = '\0';
	return (dest);
}
