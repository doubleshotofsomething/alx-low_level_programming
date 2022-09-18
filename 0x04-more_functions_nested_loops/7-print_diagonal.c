#include "main.h"

/**
 * print_diagonal - draws a diagonal line.
 *
 * Return: results.
 */
void print_diagonal(int n)
{
	int l, num;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= n; l++)
		{
			if (l > 1)
			{
				for (num = 1; num <= l - 1; num++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
