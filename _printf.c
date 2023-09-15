#include "main.h"
/**
 * deciaml_to_binary - convert decimal number to binary
 * @x: number to be converted to binary
 * Return: pointer to binary string
 */
char *deciaml_to_binary(int x)
{
	char arr[100];
	int t = 0;

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
	int m = t / 2;
	char h;

	for (int i = 0; i < m; i++)
	{
		h = arr[i];
		arr[i] = arr[t - i - 1];
		arr[t - i - 1] = h;
	}
	char *str = arr;

	return (str);
}
/**
 * _printf - produces output according to a format
 * @format: string to be formatted
 * Return: the number of characters printed excluding the null byte
 */
int _printf(const char *format, ...)
{
	va_list args;
	int n = 0;
	const char *f = format;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (; *f; f++)
	{
		if (*f == '%')
		{
			f++;
			if (*f == 'c')
			{
				char x = va_arg(args, int);

				write(1, &x, 1);
				n++;
			}
			else if (*f == 's')
			{
				char *s = va_arg(args, char *);

				write(1, s, strlen(s));
				n += strlen(s);
			}
			else if (*f == 'b')
			{
				int v = va_arg(args, int);
				char *p = deciaml_to_binary(v);

				write(1, p, strlen(p));
				n += strlen(p);
			}
			else if (*f == '%')
			{
				write(1, f, 1);
				n++;
			}
			else if (*f == '\0')
				break;
		}
		else
			write(1, f, 1);
			n++;
	}
	va_end(args);
	return (n);
}
