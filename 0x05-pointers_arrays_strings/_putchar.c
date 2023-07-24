#include <unistd.h>

/**
 * _putchar - This writes the character c to stdout
 * @c: This is the character to be printed
 * Return: Should return 1 on success
 * On error, -1 is to be returned and errno is set approtpriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
