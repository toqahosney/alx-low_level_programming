#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program.
 *
 * This program generates random characters and calculates their sum until the
 * sum reaches or exceeds 2645. It then generates and prints a final character
 * to reach the target sum of 2772. The random number generator is seeded for
 * variability.
 *
 * Return: 0 on success.
 */

int main(void)
{
	int sum;
	char c;

	/*Seed the random number generator for variability*/

	srand(time(NULL));

	/*Generate random characters and calculate the sum*/
	while (sum <= 2645)
	{
		c = rand() % 120;
		sum += c;
		putchar(c);
	}


	/*Print the final character to reach the target sum*/
	putchar(2772 - sum);
	return (0);
}
