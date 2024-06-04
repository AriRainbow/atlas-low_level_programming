#include "main.h"

/**
 * string_toupper - Function changes all lowercase letters 
 * of a string to uppercase
 *
 * @str: String to be modified
 *
 * Return: Pointer to resulting string
 *
 */

char *string_toupper(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (str[n] >= 'a' && str[n] <= 'z')
		{
			str[n] = str[n] - ('a' - 'A');
		}
		n++;
	}

	return (str);
}
