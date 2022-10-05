#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: pointer char.
 * @s2: pointer to char.
 * Return: results.
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int i = 0, j = 0, cont, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	k = i + j + 1;
	result = malloc(k * sizeof(char));
	if (result = NULL)
		return (NULL);
	for (cont = 0; cont < i; cont++)
	{
		result[cont] = s1[cont];
	}
	for (cont = 0; cont <= j; cont++)
	{
		result[cont + i] = s2[cont];
	}
	return (result);
}
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
-- INSERT --                                                                11,1          All

