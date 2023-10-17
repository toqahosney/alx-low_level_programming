#include "main.h"

/**
 * print_array - Prints the elements of an integer array.
 * @a: The array of integers to be printed.
 * @n: The number of elements to be printed.
 *
 * This function takes an integer array and its length as input and prints
 * the elements of the array with a comma and space separating each element.
 * It ends the output with a newline character.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
