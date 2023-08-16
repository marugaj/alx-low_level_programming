#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - This returns the sum of two numbers
 * @a: this is the first number
 * @b: this is the second number
 * Return: this returns sum of the two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - this function gets difference between two numbers
 * @a: The first number
 * @b: The second number
 * Return: the difference between two number
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This multiplies two numbers
 * @a: this is the first number
 * @b: This is the second number
 * Return: The multiplication value of the two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - this divides two numbers
 * @a: the first number
 * @b: the second number
 * Return: The division value of two numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - This returns remainder of division of two numbers
 * @a: this is the first number
 * @b: the second number
 * Return: the remainder of the dividion of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
