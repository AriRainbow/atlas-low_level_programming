#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int sum = 0; /* must have starting value */
	int a, b;

	for (a = 1; a < argc; a++) /* outer loop, each argument */
	{
		for (b = 0; argv[a][b] != '\0'; b++)
			/* inner loop, each character */
		{
			if(!isdigit(argv[a][b])) /* if != digit */
				/* isdigit <ctype.h> */
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[a]); /* convert and add to sum */
		/* sum must have starting value */
	}

	printf("%d\n", sum);

	return (0);
}
