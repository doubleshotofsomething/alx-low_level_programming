#include "main.h"

/**
 * print_numbers - program that prints numbers
 * 0 to 9.
 *
 * Return: results.
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		_putchar((n % 10) + '0');
	
	_putchar('\n');
}
