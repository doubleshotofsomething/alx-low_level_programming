#include "main.h"

/**
 * _abs - function computes absolute value of integer
 * Description: a function absolute value of integer
 * @ab: integer input
 *
 * Return: absolute value of integer
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
