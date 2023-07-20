#include "main.h"

/**
 * _isdigit - this checks for a digit
 * @c: This is the digit to be checked
 * Return: 1 if digit or 0 if anything else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
