#include "main.h"

/**
 * main - entry point
 *
 * _isalpha - checks for alphabetic characters
 * @c: single letter input
 *
 * return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c);
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
