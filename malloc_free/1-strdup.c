#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function returns a poitner to a new string,
 * which is duplicate of input string
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
		; /* only */

	dup_str = malloc((length + 1) * sizeof(char));
	/* lenght + 1 for NULL terminator */
	if (dup_str == NULL) /* insufficient mem */
		return (NULL);

	for (n = 0; n <= length; n++)
		dup_str[n] = str[n]; /* copy string */

	return (dup_str);
}
