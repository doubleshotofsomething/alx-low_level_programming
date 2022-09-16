#include <stdio.h>

/**
 * _isupper -  writes a functions that checks
 * for uppercase character.
 * Description: write a function that checks for uppercase character
 * @c: character that needs to be checked.
 *
 * Return: 1 if c uppercase.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
