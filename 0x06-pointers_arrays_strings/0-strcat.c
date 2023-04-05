#include "main.h"
#include <stdio.h>

/**
* _strcat - Main Enty
*
*@dest: Value to return
*@src: value to concate
*
*Return: values
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int destlen;
	int srclen;

	for (i = 0; i != '\0'; i++)
		destlen++;
	for (j = 0; j != '\0'; j++)
		srclen++;
	for (j = 0; j <= src[j]; j++)

		dest[destlen + i] = src[j];
	return (dest);
}

