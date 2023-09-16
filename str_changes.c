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
