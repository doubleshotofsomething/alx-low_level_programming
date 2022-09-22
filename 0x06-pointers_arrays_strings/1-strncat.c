#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: output.
 * @src: input.
 * @n: number of bytes from src.
 * Return: results.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	if (b < n)
	{
		dest[a] = '\0';
	}
	return (dest);
}
