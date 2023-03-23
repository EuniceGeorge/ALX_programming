#include "main.h"

/**
 * print_numbers - a function that prints digits
 *
 * Return: integer
 */

void print_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
