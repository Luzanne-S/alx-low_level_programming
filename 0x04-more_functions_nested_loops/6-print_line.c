#include "main.h"

/**
 * print_line - Draws a line in the terminal
 *
 * @n: Number of characters
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
