#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: string to compare.
 * @s2: string to compare.
 * Return: results.
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
