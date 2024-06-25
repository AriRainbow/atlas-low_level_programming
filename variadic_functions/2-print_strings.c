#include "variadic_functions.h"

/**
 * print_strings - Function prints strings, followed by new line
 *
 * @separator: String to be printed between strings
 * @n: Number of strings passed to the function
 *
 * Description: If separator is NULL, don't print.
 * If one of the string is NULL, print (nil) instead.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	/* initialize va_list */
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *); /* receives and interprets */
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator && i < n -1)
			printf("%s", separator);
		/* print if not last element */
	}

	va_end(args); /* clean up va_list */

	printf("\n");
}
