#include "main.h"

/**
 * _pow_recursion - Function returns value of x raised to power of y
 *
 * @x: base value
 * @y: exponent value
 *
 * Description: x^y = x * x^(y-1)
 *
 * Return: Result of x^y, -1 if y < 0
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	
	else if (y == 0) /* base case */
	{
		return (1);
	}

	else /* recursive case */
	{
		return (x * _pow_recursion(x, y-1));
	}
}
