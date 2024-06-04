#include "main.h"

/**
 * _strncpy - Function copies a string
 *
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Max bytes to copy from src
 *
 * Description: Copies at most n bytes from src to dest. No null 
 * byte in first n bytes of src, results in dest will not be 
 * null terminated.
 *
 * Return: dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0'; /* remaining character null bytes */
	}

	return (dest);
}
