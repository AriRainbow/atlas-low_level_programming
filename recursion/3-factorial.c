#include "main.h"

/**
 * factorial - Function returns factorial of given number
 *
 * @n: number to calc factorial
 *
 * Description: Factorial of 0 is 1
 * Factorial of n defined as n! = n (n-1) * (n-2) * ...
 *
 * Return: Factorial of n, if n < 0 returns -1
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0 || n == 1) /* base case */
	{
		return (1);
	}

	else
	{
		return n * factorial(n - 1); /* recursive case */
	}
}
