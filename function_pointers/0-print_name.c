#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 *
 * @name: Name to print
 * @f: Pointer to function used for printing the name
 *
 * Description: Function takes a name and a function pointer
 * as arguments, and calls the function pointer with the
 * name as its argument.
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name); /* calls func pointed to by f */
	/* passing name as an argument */
}
