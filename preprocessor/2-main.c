#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints name of file it was compiled from
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
