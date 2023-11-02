#include "main.h"

/**
 * _strncat - Concatenates n characters from one string to another.
 * @dest: The destination string to which 'n'
 * characters from 'src' will be appended.
 * @src: The source string from which 'n'
 * characters will be appended to 'dest.'
 * @n: The maximum number of characters to concatenate from 'src.'
 *
 * This function concatenates a maximum of 'n'
 * characters from the source string 'src' to
 * the end of the destination string 'dest.'
 * The destination string must be large enough
 * to accommodate the concatenated result.
 *
 * Return: A pointer to the destination string 'dest.'
 */


char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;


	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';

	return (dest);
}
