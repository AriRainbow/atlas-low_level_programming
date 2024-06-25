#include "variadic_functions.h"

/**
 * print_numbers - Function prints numbers, followed by new line
 *
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to function
 *
 * Description: If separator NULL, don't print
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args; /* holds list of arguments */
	unsigned int i; /* counter */
	int number; /* hold each int arg */

	/* initialize va_list */
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(args, int);
		/* retrieve next arg and interprets as  int */
		printf("%d", number);

		if (separator && i < n - 1)
			printf("%s", separator);
		/* print if not last element */
	}

	va_end(args); /* clean up va_list */

	printf("\n");
}
