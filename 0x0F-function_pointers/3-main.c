#include "3-main.c"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - this will print result of simple operations
 * @argc: This is number of arguments given to the program
 * @argv: This is an array of pointers to the arguments given
 * Return: Always 0
 */

int main(int _attribute_((_unused_)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
