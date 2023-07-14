#include <stdio.h>

/**
 * main - Entry point
 * Return: If 0 (Succesful)
*/

int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar (c);
			c++;
		}
	putchar('\n');
	return (0);
}
