#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h> /*Include the string.h header*/

/**
 * main - Entry point of the program.
 * argstostr - Concatenates all the arguments of the program with '\n'.
 * @ac: The argument count.
 * @av: The argument vector (an array of strings).
 *
 * Return: A pointer to the new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	int total_length = 0; /*Declare variables at the beginning of the function*/
	int i, j, k;
	char *result;

	for (i = 0; i < ac; i++)
		total_length += (strlen(av[i]) + 1); /*+1 for the '\n'*/

	result = malloc(total_length * sizeof(char));

	if (result == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[k] = av[i][j];
			k++;
		}
		result[k] = '\n';
		k++;
	}

	result[k] = '\0';

	return (result);
}

int main(int argc, char *argv[])
{
	char *concatenated_args;

	concatenated_args = argstostr(argc, argv);

	if (concatenated_args != NULL)
	{
		printf("Concatenated Arguments:\n%s", concatenated_args);
		free(concatenated_args);
	}
	else
	{
		printf("Error: Failed to concatenate arguments or no arguments provided.\n");
	}

	return (0);
}
