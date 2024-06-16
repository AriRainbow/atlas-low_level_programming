#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function returns a poitner to a new string which is a duplicate of the string str
 *
 * @str: String to duplicate
 *
 * Return: NULL if str is NULL or insufficient memory, otherwise
 * returns pointer to dup string 
 *
 */

char *_strdup(char *str)
{
	char *dup_str; /* char bc string = array of char */
	unsigned int n; /* counter */
	unsigned int length; /* input string length */

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
		/* calculate input length */
}
