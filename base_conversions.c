#include "main.h"
/**
 * dec_to_bin - convert decimal to binary and print it
 * @args: arguments list
 * Return: number of characters printed
 */
int dec_to_bin(va_list args)
{
	unsigned int x = va_arg(args, unsigned int);
	char *arr;
	char *s;
	int t = 0, v;
	unsigned int r = x, i;

	if (x == 0)
		return (_putchar('0'));
	if (x < 1)
		return (-1);
	for (v = 0; r > 0; v++)
	{
		r /= 2;
	}
	arr = malloc(sizeof(char) * (v + 1));
	if (arr == NULL)
		return (-1);
	while (x > 0)
	{
		if (x % 2 == 0)
			arr[t] = '0';
		else
			arr[t] = '1';
		x /= 2;
		t++;
	}
	arr[t] = '\0';
	s = str_rev(arr);
	if (s == NULL)
		return (-1);
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	free(arr);
	free(s);
	return (v);
}

/**
 * print_hex - print a number in hexadecimal in lower case
 * @args: argument list
 *
 * Return: length of the number
 */
int print_hex(va_list args)
{
	unsigned int num;
	char *p;
	int len;

	num = va_arg(args, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	p = dec_to_hex(num);
	len = strlen(p);
	write(1, p, len);
	free(p);
	return (len);
}

/**
 * print_upperhex - print a number in hexadecimal in upper case
 * @args: argument list
 *
 * Return: length of the number
 */
int print_upperhex(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *p;
	int len;

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	p = dec_to_hex(num);
	len = strlen(p);
	p = string_to_upper(p);
	write(1, p, len);
	free(p);
	return (len);
}

/**
 * print_octal - prints a number in octal
 * @args: argument list
 *
 * Return: length of the number
 */
int print_octal(va_list args)
{
	int l = 0;
	unsigned int n = va_arg(args, unsigned int);

	if (n == 0)
		return (_putchar('0'));
	if (n < 1)
		return (-1);
	l = octal(n, 0);
	return (l);
}
