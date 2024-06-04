#include "main.h"

/**
 * _strcmp - Function compares two strings
 *
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 *
 * Description: 
 *
 * Return: If s1 < s2 returns negative int,
 * if s1 = s2 returns zero, if s1 > s2 returns positive int
 *
 */

int _strcmp(char *s1, char *s2)
{
	int n = 0;

	while (s1[n] != '\0' || s2[n] != '\0')
	{
		if (s1[n] != s2[n])
		{
			return (s1[n] - s2[n]);
		}
		n++;
	}

	return (0);
}
