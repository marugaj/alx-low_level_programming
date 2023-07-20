#include "main.h"

/**
 * print_square - prints squares according to the number of lines
 * @size: the dimension of the square
 * Return: a new line if size is 0 or less
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < size; a++)
	{
	for (b = 0; b < size; b++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
