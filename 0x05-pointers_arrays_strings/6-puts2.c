#include "main.h"

/**
 * puts2 - Will print every other character of a string followed by new line
 * @str: The string being printed
 * Return: This returns nothing
 */

void puts2(char *str)
{
	int a;
	int b = 0;

	while (str[b] != '\0')
	{
	b++;
	}

	for (a = 0; a < b; a += 2)
	{
	_putchar(str[a]);
	}
	_putchar('\n');
}
