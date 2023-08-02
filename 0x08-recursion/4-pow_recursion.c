#include "main.h"

/**
 * _pow_recursion - This returns value of x raised to a power of y
 * @x: Value to raise to certain power
 * @y: Value to riase to
 * Return: This returns an integer value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
