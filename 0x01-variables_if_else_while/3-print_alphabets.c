#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase and uppercase
 * Description: a program that prints the alphabet
 * Return: 0.
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
