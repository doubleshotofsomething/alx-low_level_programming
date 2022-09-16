#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse
 *
 * Return: Always 0.
 */
int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower++)
		putchar(lower);

	putchar('\n');

	return (0);
}
