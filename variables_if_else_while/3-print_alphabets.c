#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}

	for (alph = 'A'; alph <= 'Z'; alph++)
	{
		putchar(alph);
	}

	putchar('\n');

	return (0);
}
