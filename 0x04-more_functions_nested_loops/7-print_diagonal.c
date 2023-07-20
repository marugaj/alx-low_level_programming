#include "main.h"

/**
 * print_diagonal - This draws a diagonal line
 * @n: The number of times the diagonal line is printed
 * Return: Is Empty
 */

void print_diagonal(int n)
{
	int a b;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < n; a++)
	{
	for (b = 0; b < a; b++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
