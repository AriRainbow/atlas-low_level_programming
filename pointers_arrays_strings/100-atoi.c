#include "main.h"

/**
 * _atoi - Function converts string to integer
 *
 * @s: String to convert
 *
 * Description:
 *
 * Return: Integer value of the string
 *
 */

int _atoi(char *s)
{
	int sign = 1 /* initialize sign, positive (-1, neg) */
	int result = 0; /* initialize result */

	/* skip leading white space */
	while (*s == ' ')
		s++;

	/* check for signs */
	while (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign *= -1 /* sign changes for "-" */
		s++;
	}

	/* convert characters to numbers */
}
