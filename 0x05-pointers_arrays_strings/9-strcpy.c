#include "main.h"

/**
 * _strcpy - Copy a string from source to destination
 * @dest: The destination string
 * @src: The source string
 *
 * This function copies a string from the `src` string to the `dest` string,
 * including the null-terminating character.
 * It continues copying until it reaches the end of the source string ('\0').
 * The `dest` string must have enough space to hold the copied content,
 *and it is essential to ensure there is no buffer overflow.
 *
 * Return: A pointer to the destination string (`dest`).
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
