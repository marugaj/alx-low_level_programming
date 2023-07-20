#include "main.h"

/**
 * prints_sign - Will print the sign of a number
 * @n: The number that is to be printed
 * Return: 1 for a positive number, -1 for a negative number or 0 for anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
