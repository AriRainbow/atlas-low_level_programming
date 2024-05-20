#include <stdio.h>

/**
 * main - entry point
 *
 * description: print all numbers of base 16 in lowercase
 *
 * return: always 0 (success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 15; n++)
	{
		printf("%x", n);
	}

	printf("\n");

	return (0);
}
