#include "main.h"

/**
 * print_line - function that prints a line
 *
 * @n: The character to print
 * Return: Return value
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
