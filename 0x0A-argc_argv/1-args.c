#include <stdio.h>

/**
 * main - prints number of arguments.
 * @argc: number of arguments.
 * @argv: array with numbers.
 * Return: results.
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
