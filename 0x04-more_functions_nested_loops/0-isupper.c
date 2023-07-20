#include "main.h"

/**
 * _isupper - This checks for uppercase character
 * @c: This is character to be checked
 * Return: 1 if  uppercase or 0 if anything else
 */

int _isupper(int c)

{

	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
