#include "main.h"

/**
 * _abs - Computes absolute value of an integer
 * @n: Integer to compute the absolute value for
 *
 * Return: The absolute value of the integer
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
