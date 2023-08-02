#include "main.h"

/**
 * _sqrt_recursion - Function returns the natural square root of a number
 * @n: Number whose natural square root we are looking for
 * Return: An integer value
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - This calculates the natural square root
 * @n: The number to obtain square root
 * @i: The iteration number
 * Return: The natural square root of the number
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
