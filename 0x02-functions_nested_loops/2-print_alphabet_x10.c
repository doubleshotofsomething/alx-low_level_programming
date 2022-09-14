#include "main.h"

/**
 * description - prints alphabet ten times
 *
 * return: Always 0.
 */
void print_alphabet_x10(void)
{
	int n, c;

	c = 0;

	while (c < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		c++;
		_putchar('\n');
	}
}
