#include "main.h"

/**
 * rev_string - reverses string.
 * @s: string input.
 * Return: results.
 */

void rev_string(char *s)
{
	int n, b;

	char *start, *end = s;

	for (n = 0; n < b / 2; n++)
	{
		char c;
		
		c = *end;
		*end = *start;
		*start = c;
		start++;
		end--;
	}
	end[b + 1] = '\0';
}
