#include "main.h"
/**
* _islower - printing lowercase values
*
* @c: The character to print
* Return: 1 if is lowercase
* and 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
