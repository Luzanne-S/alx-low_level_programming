#include "main.h"

/**
 * _islower - shows if input is lowercase
 *
 * @c: charater in ASCII
 *
 * Return: 1 for lowercase character
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
