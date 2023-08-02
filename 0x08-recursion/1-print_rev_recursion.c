#include "main.h"

/**
 * _print_rev_recursion - This function prints a string in reverse
 * @s: This is the string to be printed in reverse
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
