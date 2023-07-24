#include "main.h"
#include <stdio.h>

/**
 * print_rev - This prints a string in reverse followed by a new line
 * @s: This is the string to be printed
 * Return: This returns void
 */

void print_rev(char *s)
{
	int d = 0;

	while (s[d] != '\0')
	{
	d++;
	}

	for (d -= 1; d >= 0; d--)
	{
	_putchar(s[d]);
	}
	_putchar('\n');
}
