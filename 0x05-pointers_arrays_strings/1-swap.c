#include "main.h"

/**
 * swap_int - main entry
 * @a: first value
 * @b: Second value
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;

	*b = c;
}
