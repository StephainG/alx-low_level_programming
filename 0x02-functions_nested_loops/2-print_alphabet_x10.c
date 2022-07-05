#include "main.h"

/**
 * print_alphabet_x10.c - Function to print abc 10 times
 *
 * Return: 0
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
		_putchar('\n')
	}
}
