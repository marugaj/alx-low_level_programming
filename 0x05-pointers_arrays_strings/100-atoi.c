#include "main.h"

/**
 * _atoi - This converts a string to an integer
 * @s: This is the pointer to convert
 * Return: This returns an integer
 */

int _atoi(char *s)
{
	int a = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[a])
	{
	if (s[a] == 45)
	{
	min *= -1;
	}
	while (s[a] >= 48 && s[a] <= 57)
	{
	isi = 1;
	ni = (ni * 10) + (s[a] - '0');
	a++;
	}
	if (isi == 1)
	{
	break;
	}
	a++;
	}
	ni *= min;
	return (ni);
}
