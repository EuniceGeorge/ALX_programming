#include "main.h"

/**
 * _strlen - function for strlen
 * @s: value to return
 * Return: 0
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != "\O"; i++)
	{
		count++;
	}
	return (count);
}

