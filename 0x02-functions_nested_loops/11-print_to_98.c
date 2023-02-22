#include "main.h"

/**
 * print_to_98 - prints all numbers from n to 98
 * user input's number prints to 98, regardless < 98 or > 98
 * @n: number input
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				_putchar("%d, ", i);
			else if (i == 98)
				_putchar("%d\n", i);
		}
	} else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				_putchar("%d, ", j);
			else if (j == 98)
				_putchar("%d\n", j);
		}
	}
}
