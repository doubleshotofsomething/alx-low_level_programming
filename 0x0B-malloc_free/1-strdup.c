#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strdup - returns pointer to newly allocated space in memory.
 * @str: char.
 * Return: results.
 */
char *_strdup(char *str)
{
	char *result;
	int i = 0, j;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	i++;
	result = malloc(i * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
	{
		result[j] = str[j];
	}
	return (result);
}
