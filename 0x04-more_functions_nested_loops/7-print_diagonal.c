#include "main.h"

/**
 * print_diagonal - a function that draws diagonal line on the terminal
 * @n: length of the diagonal
 * Return: a diagonal line
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
		for (i = 1; i <= n; i++)
		{
			_putchar('\');
		}
	_putchar('\n');
}
