#include "main.h"

/**
 * dec_to_hex - convert a decimal to hexadecimal
 * @n: decimal number
 *
 * Return: number in hexadecimal as a string
 */
char *dec_to_hex(int n)
{
	char dig[] = "0123456789abcdef";
	char hex[1000];
	char *str;
	int len = 0, i, j = 0, num = n;

	if (num == 0)
	{
		str = malloc(2);

		if (str == NULL)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}

	while (num > 0)
	{
		int mod = num % 16;

		hex[len] = dig[mod];
		len++;
		num = num / 16;
	}

	str = malloc(len + 1);

	if (str == NULL)
		return (NULL);

	for (i = len - 1; i >= 0; i--)
		str[j++] = hex[i];

	str[j] = '\0';

	return (str);
}
