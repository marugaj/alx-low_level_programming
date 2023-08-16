#include "function_pointers.h"

/**
 * print_name - This is a function that prints a name
 * @name: This is the name to be printed
 * @f: This is the pointer to the function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}
