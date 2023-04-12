#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate string  to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *val;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;

val = malloc(sizeof(char) * (i + 1));

	if (val == NULL)
		return (NULL);

	for (r = 0; str[r]; r++
		val[r] = str[r];

	return (val);
}
