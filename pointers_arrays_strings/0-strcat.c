#include "main.h"

/**
 * _strcat - Function concatenates two strings
 *
 * @dest: Destination string
 * @src: Source string
 *
 * Description:
 *
 */

char *_strcat(char *dest, char *src)
{
	int dlength = 0; /* destination length */
	int n = 0; /* counter */

	/* find destination length */
	while (dest[dlength] != '\0')
	{
		dlength++;
	}

	/* append source to destination */
	while (src[n] != '\0')
	{
		dest[dlength + n] = src[n];
		n++;
	}

	/* New null terminator */
	dest[dlength + n] = '\0';

	/* return pointer */
	return (dest);
}
