#include "lists.h"

void _constructor(void) __attribute__ ((constructor));

/**
 * _constructor - it does executes before main()
 *
 * Return: void
 */
void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
		       "I bore my house upon my back!\n");
}
