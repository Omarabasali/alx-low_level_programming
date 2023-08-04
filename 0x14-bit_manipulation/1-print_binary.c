#include "main.h"

/**
 * print_binary - it prints the numbers as binary string
 * @n: the number which will be printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int v, counter = 0;
	unsigned long int current;

	for (v = 63; v >= 0; v--)
	{
		current = n >> v;

		if (current & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}

