#include "main.h"
/**
 * print_rev - print reversed string
 * @args: arguments list
 * Return: number of characters printed
 */
int print_rev(va_list args)
{
	char *s = va_arg(args, char *);
	char *str;
	int i, len;

	if (s == NULL)
		return (-1);
	str = str_rev(s);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	len = strlen(str);
	free(str);
	return (len);
}
/**
 * print_rot13 - encode a string with rot13
 * @args: arguments lists
 * Return: number of characters printed
 */
int print_rot13(va_list args)
{
	char a[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		'Z'};
	char b[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		'M'};
	char *str = va_arg(args, char *);
	int i, j, len;

	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 53; j++)
		{
			if (str[i] == a[j])
			{
				_putchar(b[j]);
				break;
			}
		}
	}
	len = strlen(str);
	return (len);
}
