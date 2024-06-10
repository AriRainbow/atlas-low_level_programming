#include "main.h"

int _sqrt(int n, int i); /* helper function */

/**
 * _sqrt_recursion - Function returns natural square root of number
 *
 * @n: Number to find square root of
 *
 * Description: Uses helper function _sqrt
 *
 * Return: Natural square root of n, or -1 if none
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(n, 0)); /* start recursion with 0 */
}

/**
 * _sqrt - Helper function finds natural square root
 *
 * @n: Number to find square root of
 * @i: Current number TEST as square root
 *
 * Description: TEST i * i = n
 *
 * Return: Natural square root of n, or -1 if none
 *
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
        	return (-1);

	if (i * i == n)
        	return (i); /*natural square root */

	return (_sqrt(n, i + 1)); /* continue next number */
}
