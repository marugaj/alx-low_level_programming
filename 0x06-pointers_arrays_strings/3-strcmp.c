#include "main.h"

/**
 * _strcmp - This is a function that compares two strings
 * @s1: This is the pointer to the first string for comparison
 * @s2: This is the pointer to the second string for comparison
 * Return: If str1 < str2,  negative difference of first unmatched characters.
 * If str1 == str2, return 0
 * If str1 > str2, positive difference of first unmatched characters
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
