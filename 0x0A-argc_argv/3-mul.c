#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of arguments.
 * @argv: array with arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int mul = 0;
	char c[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", c);
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", mul);
	return (0);
}
