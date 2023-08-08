#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - This converts parameters passed to the program to string
 * @ac: The argument to count
 * @av: This is the argument vector
 * Returns: A character
 */
char *argstostr(int ac, char **av)
{
	int ch = 0, a = 0, b = 0, m = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (a < ac)
	{
		while (av[a][b])
		{
			ch++;
			b++;
		}

		b = 0;
		a++;
	}

	s = malloc((sizeof(char) * ch) + ac + 1);

	a = 0;
	while (av[a])
	{
		while (av[a][b])
		{
			s[m] = av[a][b];
			m++;
			b++;
		}
		s[m] = '\n';

		b = 0;
		m++;
		a++;
	}

	m++;
	s[m] = '\0';
	return (s);
}
