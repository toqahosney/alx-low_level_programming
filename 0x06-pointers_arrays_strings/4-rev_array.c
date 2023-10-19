#include "main.h"

/**
 * reverse_array - Reverses the elements in an integer array.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 *
 * This function takes an integer array and its length as input
 * and reverses the order of its elements.
 */

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j++)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
