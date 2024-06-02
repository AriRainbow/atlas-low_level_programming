#include "main.h"

/**
 * print_triangle - Function prints a triangle, followed by new line
 * @size: Size of triangle
 * @#: Character to print the triangle
 *
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (x = 1; x <= size; x++) /* controls number of lines */
	{
		for (y = 0; y < size - x; y++) /* print spaces before hash */
		{
			_putchar(' ');
		}
		for (z = 0; z < x; z++) /* print hash */
		{
			_putchar('#');
		}
	}
}
