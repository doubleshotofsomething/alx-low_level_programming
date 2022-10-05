#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: num of elements.
 * @c: size of unit.
 * Return: results.
 */
char *create_array(unsigned int size, char c)
{
	char *res;
	unsigned int i;

	if (size == 0)
		return (NULL);
	res = malloc(size * sizeof(char));
	if (res == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		res[i] = c;
	}
	return (res);
}
