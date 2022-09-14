#include "main.h"

/**
 * times_table - a function that prints the 9 times table
 * Description: a function that prints the 9 times table
 * Return: 9 times table
 */
void times_table(void)
{
	int n, t, m;

	for ( n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (t = 0; t <= 9; t++)
		{
			_putchar(',');
			_putchar(' ');

			m = n * m;

			if (m <= 9)
				_putchar(' ');
			else
				_putchar((m / 10) + '0');

			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
