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
	int j, n, sum = 0;
	const char *f = format;

	for ( ; *f; f++)
	{
		if (*f == '%')
		{
			f++;
			for (j = 0; spec[j].c != '\0'; j++)
			{
				if (*f == spec[j].c)
				{
					n = spec[j].f(args);
					if (n == -1)
						return (-1);
					sum = sum + n;
					break;
				}
			}
		}
		else
		{
			write(1, f, 1);
			n++;
		}
	}
	return (n);
}
