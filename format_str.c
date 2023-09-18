#include "main.h"
/**
 * format_str - print either normal characters or look for format specifiers
 * @format: format string
 * @spec: array of structures
 * @args: arguments lists
 * Return: number of characters printed
 */
int format_str(const char *format, fmt spec[], va_list args)
{
	int n, sum = 0;
	const char *f = format;

	for ( ; *f; f++)
	{
		if (*f == '%')
		{
			f++;
			n = format_str2(f, spec, args);
			sum += n;
		}
		else
		{
			write(1, f, 1);
			sum++;
		}
	}
	return (sum);
}
/**
 * format_str2 - print either normal characters or look for format specifiers
 * @format: format string
 * @spec: array of structures
 * @args: arguments lists
 * Return: number of characters printed
 */
int format_str2(const char *format, fmt spec[], va_list args)
{
	int i, m, sum = 0;

	for (i = 0; spec[i].c != '\0'; i++)
	{
		if (*format == spec[i].c)
		{
			m = spec[i].f(args);
			if (m == -1)
				return (-1);
			sum += m;
			break;
		}
	}
	if (spec[i].c == '\0' && *format != ' ')
	{
		if (*format != '\0')
		{
			format--;
			write(1, format, 1);
			format++;
			write(1, format, 1);
			sum += 2;
		}
		else
			return (-1);
	}
	return (sum);
}
