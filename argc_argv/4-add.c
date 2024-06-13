#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Description: If no number, print 0 followed by new line.
 * If symbol, print error followed by new line.
 *
 * Return: Sum positive numbers 0 (success), otherwise 1 (error)
 *
 */

int main(int argc, char *argv[])
{
	int sum;
	int a, b;

	for (a = 1; a < argc; a++) /* outer loop, each argument */
	{
		for (b = 0; argv[a][b] != '\0'; b++)
			/* inner loop, each character */
		{
			if()
	}
	return (0);
}
