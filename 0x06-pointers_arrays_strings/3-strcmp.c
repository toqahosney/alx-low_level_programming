#include "main.h"

/**
 * _strcmp - Compares two strings character by character.
 * @s1: First string to compare.
 * @s2: Second string to compare.
 *
 * Returns 0 if strings are equal, negative if s1 < s2, positive if s1 > s2.
 * Return: 0 if the strings are equal,
 * a negative value if 's1' is less than 's2',
 * and a positive value if 's1' is greater than 's2'.
 */


int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 40) - ((int)*s2 - 40);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}
