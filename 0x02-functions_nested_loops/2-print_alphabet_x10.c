#include "main.h"

/**
* Print_Alphabet_X10 - function that prints 10X alphabet
*
*Return: Always 0
*/

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
