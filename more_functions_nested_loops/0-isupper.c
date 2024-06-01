#include "main.h"
#include <ctype.h>

/**
 * _isupper - Function checks for uppercase character
 * @c: Character being checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
