#include "main.h"

/**
 * _strlen_recursion - Function returns length of string
 *
 * @s: string
 *
 * Description:
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0') /* base case */
	{
		return (0);
	}

	return 1 + _strlen_recursion(s + 1); /* recursive case */
}
