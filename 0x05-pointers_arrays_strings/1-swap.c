#include "main.h"

/**
 * swap_int - swap the values of integers.
 * @a: first integer.
 * @b: second integer.
 * Return: results.
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
