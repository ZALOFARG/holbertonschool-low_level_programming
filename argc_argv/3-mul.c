#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: counter
 * @argv: array
 *
 * Description: returns the number of arguments
 *
 * Return: on success (0)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
