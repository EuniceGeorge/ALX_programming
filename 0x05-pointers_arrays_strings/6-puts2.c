#include "main.h"
/**
 * puts2 - print every other character
 * @str: value
 * Return: 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		if (str[i] == '\0')
		_putchar('\n');
		break;
	}
	if (i % 2 == 0)
	_putchar(str[i]));
}
