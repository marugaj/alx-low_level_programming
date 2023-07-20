#include "main.h"

/**
 * print_line - this draws a straight line 
 * @n: the number of lines to draw
 * Return: empty
 */

void print_line(int n)
{
	int z;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (z = 0; z < n; z++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
