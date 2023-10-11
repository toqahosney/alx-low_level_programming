#include "main.h"

/**
 * print_sign - prints + if n is greater than zero,
 * 0 if n is zero, and - if n is less than zero.
 *
 * @n: The integer input to check the sign.
 *
 * Return: 1 if n is positive, 0 if n is zero, -1 if n is negative.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

