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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
