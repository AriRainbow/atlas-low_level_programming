#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function concatenates two strings
 *
 * @s1: String 1
 * @s2: String 2
 *
 * Description: If NULL is passed, treat as empty string
 *
 * Return: NULL on failure, otherwise pointer to new malloc
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int len_s1, len_s2; /* do I need entry point? */
	unsigned int a; /* counter */
	unsigned int b; /*  */

	/* NULL as empty string */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* calculate string lengths */
	for (a = 0; s1[a] != '\0'; a++)
		len_s1++;

	for (a = 0; s2[a] != '\0'; a++)
		len_s2++;
}
