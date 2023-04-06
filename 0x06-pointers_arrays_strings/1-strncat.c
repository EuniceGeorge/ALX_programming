#include "main.h"
#include <stdio.h>

/**
 * _strncat - main Enrty
 *
 * @dest: Value to return
 * @src: value to return
 * @n: value to use
 *
 * Return: success
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int destlen = 0;
	int srclen = 0;

	for (i = 0; i != '\0'; i++)
		destlen++;
	for (j = 0; j != '\0'; j++)
		srclen++;
	for (j = 0; j < n; j++)
	{
		dest[destlen + i] = src[j];
	}
	return (dest);
}

