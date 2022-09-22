#include "main.h"

/**
 * _strlen - returns string length.
 * @s: input.
 * Return: results.
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; s[n] != '\0' ; n++)
		;
	return (n);
}
