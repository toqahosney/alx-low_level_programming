#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The input string to be converted
 *
 * This function takes an input string `s` and converts it into an integer.
 * It handles both positive and negative integer values within the string,
 * stopping conversion when it encounters a non-digit character.
 * The resulting integer is returned.
 *
 * Return: The integer value converted from the input string.
 */


int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
