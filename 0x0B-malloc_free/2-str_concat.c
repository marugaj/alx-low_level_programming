#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - This function concatenates two strings
 * @s1: This is the first string to concatenate
 * @s2: This is the second string to concatenate
 * Return: The two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, g = 0, z = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	z = a + b;
	s = malloc((sizeof(char) * z) + 1);

	if (s == NULL)
		return (NULL);

	b = 0;

	while (g < z)
	{
		if (g <= a)
			s[g] = s1[g];

		if (g >= a)
		{
			s[g] = s2[b];
			b++;
		}

		g++;
	}

	s[g] = '\0';
	return (s);
}
