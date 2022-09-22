#include "main.h"

/**
 * reverse_array - reverses contents of an array of integers.
 * @a: array to complete.
 * @n: array size.
 * Return: results.
 */

void reverse_array(int *a, int n)
{
	int change, begin, end;

	begin = 0;
	end = n - 1;
	while (begin < end)
	{
		change = *(a + begin);
		*(a + begin) = *(a + end);
		*(a + end) = change;
		begin++;
		end--;
	}
}
