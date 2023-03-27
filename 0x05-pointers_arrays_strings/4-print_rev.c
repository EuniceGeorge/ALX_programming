#include "main.h"

/**
 * print_rev - print in reverse
 * @s: value
 * Return: 0
 */

void print_rev(char *s)
{
	int i;

	for  (i = 0; i >= 0; i++)
	{
		if (s[i] == '\0')
			break;
	}
	for (i--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
