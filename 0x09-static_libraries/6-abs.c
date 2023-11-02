#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: integer input
 *
 * Return: The absolute value of the input integer.
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
