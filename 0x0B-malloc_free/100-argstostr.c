#include <stdio.h>
#include <stdlib.h>

/**
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

	int total_length = 0;
	int i, j, k;
	char *result;

	/*Calculate the total length needed for the concatenated string.*/
	for (i = 0; i < ac; i++)
		total_length += (strlen(av[i]) + 1); /*+1 for the '\n'*/

	/*Allocate memory for the concatenated string.*/
	result = malloc(total_length * sizeof(char));

	if (result == NULL)
		return (NULL);

	k = 0;

	/*Copy each argument followed by '\n' into the result string.*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[k] = av[i][j];
			k++;
		}
		result[k] = '\n'; /*Add '\n' after each argument*/
		k++;
	}

	result[k] = '\0'; /*Null-terminate the result string*/

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
