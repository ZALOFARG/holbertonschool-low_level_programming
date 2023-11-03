#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints what you have typed in
 * @argc: counter
 * @argv: array
 *
 * Description: returns what you have prompted
 *
 * Return: on success (0)
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
