#include "main.h"

/**
 * string_to_upper - changes all lowercase letters of a string to uppercase
 *
 * @s: input string
 *
 * Return: the string in upper case
 */

char *string_to_upper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;

		i++;
	}

	return (s);
}
