#include "main.h"

int _primeHelper(int n, int i);

/**
 * is_prime_number - Function determines if number is prime
 *
 * @n: Number to check if prime
 *
 * Description: Uses helper function _primeHelper to test
 *
 * Return: 1 if prime, 0 otherwise
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_primeHelper(n, 2));
}

/**
 * _primeHelper - Function determines if number is prime
 *
 * @n: Number to check if prime
 * @i: Current divisor to test
 *
 * Description: Helper function for is_prime_number. Checks if 
 * n is divisible by any number from 2 to sqrt of n.
 *
 * Return: 1 if prime, 0 otherwise
 *
 */

int _primeHelper(int n, int i)
{
	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (_primeHelper(n, i + 1));
}
