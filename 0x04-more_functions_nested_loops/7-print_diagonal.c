#include "main.h"

/**
 * print_diagonal - function to print a diagonal
 *
 * @n: The character to print
 * Return: Return value
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}

		_putchar(92);

		if (i < (n - 1))
			_putchar('\n');
	}

	_putchar('\n');
}
