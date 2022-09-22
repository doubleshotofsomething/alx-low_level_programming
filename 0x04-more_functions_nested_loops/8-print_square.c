#include "main.h"

/**
 * print_square - prints square.
 * @size: square size.
 * Return: results.
 */

void print_square(int size)
{
	int h, w;

	if (size <= 0)
	{
		_putchar('\n'');
	}
	else
	{
		for (h = 1; h <= size; h++)
		{
			for (w = 1; w <= size; w++)
				_putchar('#');
		}
		_putchar('\n');
	}
}
