#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and intializes it with a specific char,
 * @size: size of the array
 * @c: char to intialize
 * Return: pointer to the array intialized or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		n[i] = c;
	}

	return (n);
}

int main(void)
{
	unsigned int size = 10;
	char initialChar = 'A';

	char *result = create_array(size, initialChar);

	if (result != NULL)
	{
		free(result);
	}
	else
	{
		/* Handle the case where memory allocation fails */
	}

	return (0);
}
