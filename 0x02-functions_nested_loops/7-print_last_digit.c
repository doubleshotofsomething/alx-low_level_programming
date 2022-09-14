#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @nld: number's last digit
 *
 * return: last number value
 */
int print_last_digit(int nld)
{
	int p;

	p = (nld % 10);

	if (p < 0)
	{
		p = (-1 * p);
	}

	_putchar(p + '0');
	return (p);
}
