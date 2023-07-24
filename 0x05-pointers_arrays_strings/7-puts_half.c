#include "main.h"

/**
 * puts_half - This prints the half of a string followed by a new line
 * @str: String to be printed
 * Return: This returns nothing
 */

void puts_half(char *str)
{
	int a = 0;
	int b;

	while (str[a] != '\0')
	{
	a++;
	}
	if (a % 2 == 1)
	{
	b = (a - 1) / 2;
	b += 1;
	}
	else
	{
	b = a / 2;
	}

	for (; b < a; b++)
	{
	_putchar(str[b]);
	}
	_putchar('\n');
}
