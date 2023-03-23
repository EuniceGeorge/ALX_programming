#include "main.h"
/**
 * print_sign - print sign
 * @n: The character to print
 * Return: 1,0 and -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
	}
	else

	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}
