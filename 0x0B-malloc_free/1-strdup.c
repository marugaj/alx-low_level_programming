#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Functions that duplicates a string
 * @str: This is the string to be copied
 * Return: The string that is duplicated
 */

char *_strdup(char *str)
{
	int d = 0;
	int g = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[g])
	{
		g++;
	}

	s = malloc((sizeof(char) * g) + 1);

	if (s == NULL)
		return (NULL);

	while (d < g)
	{
		s[d] = str[d];
		d++;
	}

	s[d] = '\0';
	return (s);
}
