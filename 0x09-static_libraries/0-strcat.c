#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to which src will be appended.
 * @src: The source string to be appended to dest.
 *
 * This function concatenates (appends)
 * the characters of the source string 'src'
 * to the end of the destination string 'dest.'
 * The destination string must be large
 * enough to accommodate the concatenated result.
 *
 * Return: A pointer to the destination string 'dest.'
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	while (dest[c])
		c++;

	for (c2 = 0; src[c2]; c2++)
		dest[c++] =  src[c2];

	return (dest);
}
