#include "main.h"

/**
 * print_most_numbers - print numbers except
 * 2 and 4.
 * Return: results.
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
			;
		else
			_putchar(n);
	}
	_putchar('\n');
}
