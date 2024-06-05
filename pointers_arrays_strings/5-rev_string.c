#include "main.h"

/**
 * rev_string - Function reverses a string
 *
 * @s: String to be reversed
 *
 * Description: First calculates length, then swaps characters 
 * from beginning and end moving towards center.
 *
 */

void rev_string(char *s)
{
	int len = 0; /* variable stores length of string */
	int i; /* counter */
	char temp; /* temp variable for swapping characters */

	/* Calculate length of string */
	while (s[len] != 0) /* loop until end */
	{
		len++;
	}

	/* swap characters from beginning and end */
	for (i = 0; i < len / 2; i++) /* loop until middle */
	{
		temp = s[i]; /* store current char in temp */
		s[i] = s[len - i - 1]; /* swap current with end */
		s[len - i - 1] = temp; /* replace end char with temp val */
	}
}
