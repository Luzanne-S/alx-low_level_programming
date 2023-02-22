#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
char letter = 'a';

for (int i = 0; i < 10; i++)
{
for (int j = 0; j < 26; j++)
{
_putchar("%c", letter);
letter++;
_putchar("\n");
letter = 'a';
}
}
}
print_alphabet_x10();

