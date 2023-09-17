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
		if (j == 53)
			_putchar(str[i]);
	}
	len = strlen(str);
	return (len);
}

/**
 * print_newhex - print a number in hexadecimal in upper case
 * @num: number to convert
 *
 * Return: length of the number
 */
int print_newhex(int num)
{
	char *p = dec_to_hex(num);
	int len = strlen(p);

	p = string_to_upper(p);

	write(1, p, len);

	free(p);

	return (len);
}

/**
 * print_nonprint - prints non printable chracters in hexadecimal
 * @args: argument list
 *
 * Return: length of the number
 */
int print_nonprint(va_list args)
{
	int i = 0, l = 0;
	char *str = va_arg(args, char *);
	char *s;
	char c;

	if (str == NULL)
	{
		s = "null";
		l += write(1, s, strlen(s));

		return (l);
	}
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] < 32 || str[i] >= 127)
			{
				s = "\\x";
				l += write(1, s, strlen(s))

				if (str[i] < 16)
				{
					_putchar('0');
					l++;
				}
				l += print_newhex(str[i]);
			}
			else
			{
				c = str[i];
				l += write(1, &c, 1);
			}
			i++;
		}
	}
	return (l);
}
