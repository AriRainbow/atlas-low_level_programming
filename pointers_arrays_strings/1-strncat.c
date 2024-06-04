#include "main.h"

/**
 * _strncat - Function concatenates two strings
 *
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Max number of bytes from src to concatenate
 *
 * Description:
 *
 * Return: dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlength = 0;
	int i = 0;

	/* find length of destination */
	while (dest[dlength] != '\0')
	{
		dlength++;
	}

	/* append at most n bytes from src to dest */
	while (src[i] != '\0' && i < n)
	{
		dest[dlength + i] = src[i];
		i++;
	}

	/* add null terminator */
	dest[dlength + i] = '\0';

	/* return pointer */
	return (dest);
}
