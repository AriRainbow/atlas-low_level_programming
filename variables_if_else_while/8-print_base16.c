#include <stdio.h>

/**
 * main - print all numbers of base 16 in lowercase
 *
 * return: always 0 (success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 15; n++)
	{
		if (n < 10)
		{
			putchar(n + '0');
		}
		else
		{

			putchar(n - 10 + 'a');
		}
	}

	putchar('\n');

	return (0);
}
