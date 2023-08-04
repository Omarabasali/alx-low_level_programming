#include "main.h"

/**
 * print_binary - it prints the numbers as binary string
 * @n: the number which will be printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, printed = 0;

	while (bit)
	{
		if (n & 1l << --bit)
		{
			_putchar('1');
				printed++;
		}
		else if (printed)
			-putchar('0');
	}
	if (!printed)
		_putchar('0');
}
