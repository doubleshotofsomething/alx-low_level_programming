#include "main.h"

/**
 * more_numbers - function that prints ten times the numbers.
 * 
 * Return: Always 0.
 */
void more_numbers(void)
{
	int num1, num2, num3, row;

	for (row = 1; row <= 10; row ++)
	{
		for (num1 = 0; num1 <= 14; num1++)
		{
			num2 = num1 / 10;
			num3 = num1 % 10;
			if (num1 > 9)
				_putchar(num2 + '0');

			_putchar(num3 + '0');
		}
		_putchar('\n');
	}
}
