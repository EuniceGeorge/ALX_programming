#include "main.h"

/**
 * _abs - for absolute value
 * @a: The character to print
 * Return: Always a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >=  0)
		a = a;
	return (a);
}
