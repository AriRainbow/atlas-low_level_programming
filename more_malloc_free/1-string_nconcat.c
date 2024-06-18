#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Function concatenates two strings
 *
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes s2
 *
 * Description: If n >= s2, use entire string
 * If NULL is passed, treat as empty string
 *
 * Return: NULL if fails, otherwise pointer to new alloc
 * space in mem containing s1 followed by first n bytes
 * of s2 and null terminated
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int len_s1 = 0;
	unsigned int len_s2 = 0;
	unsigned int a, b;

	/* NULL as empty string */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* length of s1 */
	while (s1[len_s1] != '\0')
		len_s1++;

	/* length of s2 */
	while (s2[len_s2] != '\0')
		len_s2++;

	/* malloc concat_str */
	concat_str = malloc((len_s1 + n + 1) * sizeof(char));

	if (concat_str == NULL)
		return (NULL);

	/* copy s1 to new string */
	for (a = 0; a < len_s1; a++)
		concat_str[a] = s1[a];

	/* copy n bytes of s2 to new string */
	for (b = 0; b < n; b++, a++)
		concat_str[a] = s2[b];

	/* null terminate new string */
	concat_str[a] = '\0';

	return (concat_str);
}
