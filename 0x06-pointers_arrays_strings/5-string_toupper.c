#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase, in a string.
 * @l: string.
 * Return: results.
 */

char *string_toupper(char *l)
{
	int n = 0;

	while (*(l + n) != '\0')
	{
		if (*(l + n) >= 'a' && *(l + n) <= 'z')
		{
			*(l + n) = *(l + n) - 32;
		}
		n++;
	}
	return (l);
}
