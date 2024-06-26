#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Function that prints anything
 *
 * @format: List of types of arguments passed to function
 *
 * Description: c char, i integer, f float, s char * (if
 * string is NULL print (nil) instead)
 * Any other char should be ignored.
 * Line 33 check if valid spec and not first element
 *
 */

void print_all(const char * const format, ...)
{
	va_list args; /* holds list of arguments */
	unsigned int i = 0; /* counter */
	unsigned int n; /* counter, initialize to 0 inside loop */
	unsigned int flag = 0; /* separator 0 no comma 1 comma */
	char *str; /* holds string arguments */
	const char t_arg[] = "cifs"; /* array of valid format specs */
	char *separator = ""; /* separator str, nothing before first */

	/* initialize argument list */
	va_start(args, format);

	while (format && format[i])
	{
		n = 0; /* reset at beginning of each iteration */
		while (t_arg[n]) /* iterate valid format specs *
		{
			if (format[i] == t_arg[n] && flag)
			{
				printf("%s", separator);
				break;
			}
			n++;
		}

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				flag = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				flag = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				flag = 1;
				if (!str) /* if str NULL */
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}

		separator = ","; /* update to , */
		i++;
	}

	printf("\n");
	va_end(args);
}
