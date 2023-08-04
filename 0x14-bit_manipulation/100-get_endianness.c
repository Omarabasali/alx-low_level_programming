#include "main.h"

/**
 * get_endianness - it checks if a machine is little or a big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *) &k;

	return (*c);
}
