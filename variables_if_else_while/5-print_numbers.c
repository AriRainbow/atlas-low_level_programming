#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all single digit numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
		if (n < 9)
		{
			printf(",");
		}
	}
	printf("\n");

	return (0);
}
