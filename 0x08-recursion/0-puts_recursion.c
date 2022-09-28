#include "main.h"
#include <string.h>

/**
 * a function that prints a string, followed by a new line.
 * @s : parameter
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
