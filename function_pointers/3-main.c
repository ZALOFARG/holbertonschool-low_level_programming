#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Executes arithmetic operations with arguments from the command line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1;
	char *operator;
	int num2;
	int result;

	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	operation = get_op_func(operator);
	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
