#include "main.h"
/**
 * str_rev - take string and reverse it
 * @s: string to be reversed
 * Return: reversed string
 */
char *str_rev(char *s)
{
	char c;
	int len = strlen(s), i, j;
	char *str;

	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		str[i] = s[i];
	}
	str[i] = '\0';
	for (j = 0; j < (len / 2); j++)
	{
		c = str[j];
		str[j] = str[len - j - 1];
		str[len - j - 1] = c;
	}
	return (str);
}
