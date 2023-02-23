#include "main.h"

/**
 * print_numbers - Prints numbers from 0-9
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
