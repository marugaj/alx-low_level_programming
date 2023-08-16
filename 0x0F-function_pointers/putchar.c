#include <unistd.h>
/**
 * _putchar - This writes the charracter c to stdout
 * @c: This is the character to be printed
 * Return: On succes return 1, on error return -1
 * Errno shold be set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
