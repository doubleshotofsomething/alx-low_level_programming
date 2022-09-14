#include "main.h"

/**
 * _abs - function comoutes absoluter value of integer
 * @ab: integer input
 *
 * return: absolute value of integer
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
