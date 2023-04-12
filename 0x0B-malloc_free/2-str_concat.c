#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, c;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

		i = c = 0;
	while (s1[i] != '\0')
		i++;

	while (s2[c] != '\0')
		c++;

	conct = malloc(sizeof(char) * (i + c + 1));

	if (conct == NULL)
		return (NULL);

	i = c = 0;

	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[c] != '\0')
	{
		conct[i] = s2[c];
		i++, c++;
	}
	conct[i] = '\0';
	return (conct);
}
