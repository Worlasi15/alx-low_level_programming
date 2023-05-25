#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - function for simple operations
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 Always(success)
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
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

	if (op  == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) ||
	    (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_add(num1, num2));
	return (0);
}
