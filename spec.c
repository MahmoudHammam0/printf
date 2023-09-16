#include "main.h"
/**
 * print_char - print character
 * @args: arguments list
 * Return: 1
 */
int print_char(va_list args)
{
	char x = va_arg(args, int);

	write(1, &x, 1);
	return (1);
}
/**
 * print_str - print string
 * @args: arguments list
 * Return: string length
 */
int print_str(va_list args)
{
	char *s = va_arg(args, char *);

	write(1, s, strlen(s));
	return (strlen(s));
}
/**
 * print_per - print % in case of %%
 * @args: argumnets lists
 * Return: 1
 */
int print_per(__attribute__((unused))va_list args)
{
	char c = '%';

	write(1, &c, 1);
	return (1);
}
/**
 * print_num - print number
 * @args: arguments lists
 * Return: number of nums printed
 */
int print_num(va_list args)
{
	int b = va_arg(args, int);
	int v = print_number(b, 0);

	return (v);
}