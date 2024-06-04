#include "main.h"

/**
 * _strlen - Function returns length of a string
 *
 * @s: Pointer to string
 *
 * Description: Iterates through string until null terminator
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
