#include "main.h"
#include <limits.h>

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
	int sign = 1; /* initialize sign, positive (-1, neg) */
	int result = 0; /* initialize result */
	int digit = *s - '0'; 

	/* skip leading white space */
	while (*s == ' ')
		s++;

	/* check for signs */
	while (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign *= -1; /* sign changes for "-" */
		s++;
	}

	/* convert characters to numbers */
	while (*s >= '0' && *s <= '9')
	{
		/* see notes for better explanation of following */
		if(sign == 1 && result > (INT_MAX - digit) / 10)
			return (INT_MAX); /* positive overflow */

		if (sign == -1 && result < (INT_MIN + digit) / 10)
			return (INT_MIN); /* negative overflow */

		result = result * 10 + digit; /* add digit to result */
		s++;
	}

	return (result * sign); /* result with sign applied */	

}
