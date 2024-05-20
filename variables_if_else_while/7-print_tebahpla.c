#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints lowercase alphabet in reverse
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char n;

	n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}

	putchar('\n');

	return (0);
}
