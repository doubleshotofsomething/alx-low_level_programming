#include "main.h"
#include <stdio.h>

/**
 * whatsmyname - prints its name.
 * @argv -array with arguments.
 * @argc - number of arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n" , argv[0]);
	return(0);
}