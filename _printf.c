#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: string to be formatted
 * Return: the number of characters printed excluding the null byte
 */
int _printf(const char *format, ...)
{
	int n = 0;
	va_list args;
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
