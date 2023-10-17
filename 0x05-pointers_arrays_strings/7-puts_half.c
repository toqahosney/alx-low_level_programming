#include "main.h"

/**
 * puts_half - Prints the second half of a given string.
 * @str: The input string.
 *
 * This function calculates the length of the input string, and then
 * prints the characters in the second half of the string.
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
