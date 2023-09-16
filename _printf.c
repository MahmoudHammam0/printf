#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: string to be formatted
 * Return: the number of characters printed excluding the null byte
 */
int _printf(const char *format, ...)
{
	va_list args;
	int n;
	fmt spec[] = {
		{'c', print_char},
		{'s', print_str},
		{'b', dec_to_bin},
		{'%', print_per},
		{'d', print_num},
		{'i', print_num},
		{'x', print_hex},
		{'X', print_upperhex},
		{'u', print_unsigned},
		{'r', print_rev},
		{'o', print_octal},
		{'\0', NULL}
	};
	va_start(args, format);
	if (format == NULL)
		return (-1);
	n = format_str(format, spec, args);
	va_end(args);
	return (n);
}
