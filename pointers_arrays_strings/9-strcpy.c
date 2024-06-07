#include "main.h"

/**
 * _strcpy - Function copies str pointed by src to
 * buffer pointed by dest.
 *
 * @dest: Pointer to destination buffer
 * @src: Pointer to source string
 *
 * Description:
 *
 * Return: dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest; /* point to same location as dest */

	/* copy src to dest */
	while (*src != '\0')
	{
		*dest = *src; /* copy src to dest */
		dest++; /* next */
		src++; /* next */
	}

	*dest = '\0'; /* append null terminator */

	return (ptr); /* return to beginning of dest */
}
