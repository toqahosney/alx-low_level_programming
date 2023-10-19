#include "main.h"

/**
 * _strncpy - Copies up to 'n' characters from one string to another.
 * @dest: The destination string to which characters will be copied.
 * @src: The source string from which characters will be copied.
 * @n: The maximum number of characters to copy from 'src.'
 *
 * This function copies up to 'n'
 * characters from the source string 'src' to
 * the destination string 'dest.'
 * If the source string is null-terminated before
 * 'n' characters are copied,
 * the remaining characters in the destination string
 * are filled with null bytes
 * to ensure a total of 'n' characters are written.
 *
 * Return: A pointer to the destination string 'dest.'
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;


	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
