#include "main.h"

/**
 * _puts - prints a str and a newline
 * @str: value to use
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');

}
