#include "main.h"

/**
 * string_toupper - Converts lowercase letters to uppercase in a string.
 * @str: The input string to convert.
 *
 * This function takes an input string
 * and converts all lowercase letters to uppercase,
 * modifying the original string.
 * Return: A pointer to the modified string.
 */



char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
