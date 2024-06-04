#include "main.h"

/**
 * cap_string - Function capitalizes all words of string
 *
 * @str: String to modify
 *
 * Return: str
 *
 */

char *cap_string(char *str)
{
	int n = 0;
	int x;

	/* list of separators */
	char separators[] = " \t\n,;.!?\"(){}";

	/* cap first character if lowercase letter */
	if (str[n] >= 'a' && str[n] <= 'z')
	{
		str[n] -= 32;
	}

	/* iterate string */
	while (str[n] != '\0')
	{
		/* check for separator */
		for (x = 0; separators[x] != '\0'; x++)
		{
			if (str[n] == separators[x])
			{
				/* cap next if lowercase */
				if (str[n + 1] >= 'a' && str[n + 1] <= 'z')
				{
					str[n + 1] -= 32;
				}
				break; /* exit loop once separator found */
			}
		}
		n++;
	}

	return (str);
}
