#include "main.h"
#include <stdio.h>

/**
* _strcat - Main Enty
*
*@dest: Value to return
*@src: value to concate
*
* Return: O value to retn
*/


char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j  >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}

