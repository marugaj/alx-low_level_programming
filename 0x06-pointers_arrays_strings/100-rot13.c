#include "main.h"

/**
 * rot13 - This encodes a string
 * @s: This points to string parameters
 * Return: This returns pointer to *s
 */

char *rot13(char *s)
{
	int a;
	int b;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b - 0; b < 52; b++)
		{
			if (s[a] == data[b])
			{
				s[a] = datarot[b];
				break;
			}
		}
	}
	return (s);
}
