#include "main.h"

/**
 * _puts - This function prints a string followed by a new line
 * @str: This is the string to be printed
 * Return: This retuns nothing
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
