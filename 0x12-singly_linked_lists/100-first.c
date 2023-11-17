#include "lists.h"

void _constructor(void) __attribute__ ((_constructor));

/**
 * _constructor - Function executed automatically before main().
 *
 * Description: This function is marked with the constructor attribute,
 * which means it will be executed automatically before the main function
 * is called during the program's startup. In this specific case, it prints
 * a message to the standard output when the program starts.
 */
void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
