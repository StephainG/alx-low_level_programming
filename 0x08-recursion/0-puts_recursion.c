#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string printed
 *
 * Return - strings
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		-puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}

	return (0);
}
