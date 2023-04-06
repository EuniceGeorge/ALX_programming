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
	int i = 0, j = 0i;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}

