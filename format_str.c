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
	int i, j, n, sum = 0;
	const char *f = format;

	for (i = 0; f[i] != '\0'; i++)
	{
		if (f[i] == '%')
		{
			for (j = 0; spec[j].c != '\0'; j++)
			{
				if (f[i + 1] == spec[j].c)
				{
					n = spec[j].f(args);
					if (n == -1)
						return (-1);
					sum = sum + n;
					break;
				}
			}
			i++;
		}
		else
		{
			write(1, f, 1);
			n++;
		}
	}
	return (n);
}
