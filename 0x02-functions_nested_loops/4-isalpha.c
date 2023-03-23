#include "main.h"

/**
* _isalpha - Function to print alphabet
*
*  @c: The character to print
*  Return: 1 if it is alphabet
*  or return  0
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 127) || (c >= 65  && c <= 90))
		return (1);
	else
		return (0);
}
