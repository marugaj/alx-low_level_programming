#include "main.h"

/**
 * is_prime_number - Function that returns when a value is prime numbers
 * check_prime - This checks if number is a prime value
 * @n: The number to be checked
 * @i: The number of iteration times
 * Return: This returns an integer value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
