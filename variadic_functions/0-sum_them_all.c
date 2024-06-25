#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of all its parameters.
 *
 * @n: Number of parameters passed to function
 *
 * Description:
 *
 * Return: The sum of all parameters, or 0 if n == 0
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args; /* holds list of arguments */
	unsigned int i; /* counter */
	int sum = 0;

	/* check if number of arguments is zero */
	if (n == 0)
		return (0);

	/* initialize va_list */
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
		/* retrieve next argument and add to sum */
	}

	va_end(args); /* clean up va_list */

	return (sum);
}
