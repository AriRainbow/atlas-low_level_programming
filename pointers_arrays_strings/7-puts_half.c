#include "main.h"

/**
 * puts_half - Function prints half a string, followed by new line.
 *
 * @str: Input string
 *
 * Description: If number of characters is odd, fuction 
 * should print last half plus middle character.
 *
 */

void puts_half(char *str)
{
	int length = 0; /* variable stores length */
	int n; /* counter */
	int second_half; /* start index for print 2nd half */

	/* calculate length of string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* find starting point of 2nd half */
	if (length % 2 == 0)
	{
		second_half = length / 2; /* even length */
	}
	else
	{
		second_half = (length -1) / 2; /* odd length */
	}
}
