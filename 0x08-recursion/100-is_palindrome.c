#include "main.h"

/**
 * _strlen_recursion - Function that returns lwngth of a string
 * @s: The string in reference
 * Return: The length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - This compares each character of a string
 * @s: This is the string
 * @n1: The smallest iterator
 * @n2: The biggest iterator
 * Return: This returns an integer value
 */

int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - Function to detect if string is a palindrome
 * @s: This is the string to be checked
 * Return: 1 if string s is palindrone, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0,  _strlen_recursion(s) - 1));
}
