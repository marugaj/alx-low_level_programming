#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char e;

	int y;

	e = 'a';
	y = '0';

	while
		(y < 10) {
			putchar(y + '0');
			y++;
		}
	while
		(e <= 'f') {
			putchar(e);
			e++;
		}
	putchar('\n');
	return (0);
}
