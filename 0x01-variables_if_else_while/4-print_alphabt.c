#include <stdio.h>
/**
 * main - entry point
 *
 * Return: lowercase alphabet
 */
int main(void)
{
	char lower, q, e;

	q = 'q';
	e = 'e';

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != e && lower != q)
			putchar(lower);
	}
	"printf("\n");

	return (0);
}
