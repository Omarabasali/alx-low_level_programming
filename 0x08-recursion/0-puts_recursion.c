#include "main.h"

/**
 * _putss recursion-function like puts();
 * @s:inputs
 * REturn:Always 0(Success)
 */

void _puts_recursion(char *s)
{
if (*s)

	{
	_putchar(*s);
	_puts_recursion(s + 1);

	}

	else
		_putchar('\n');
}
