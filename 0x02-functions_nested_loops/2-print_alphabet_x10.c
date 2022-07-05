#include "main.h"

/**
 *print-alphabet_x10 - Function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */

void print_alphabet_x10(void)
{
	char alpha, co;

	co = 0;

	while (co < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		co++;
		_putchar('\n');
	}
}