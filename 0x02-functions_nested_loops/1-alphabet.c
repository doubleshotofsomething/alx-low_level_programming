#include "main.h"

/**
 * main - entry point
 *
 * print_alphabet: print alphabet in lowercase
 *
 * return: Always 0.
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
