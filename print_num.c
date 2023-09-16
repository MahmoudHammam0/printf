#include "main.h"
/**
 * print_number - print numbers
 * @n: number to be printed
 * @l: number of characters printed
 * Return: number of characters printed
 */
int print_number(int n, int l)
{
	unsigned int m = n;

	if (n < 0)
	{
		m = -m;
		_putchar('-');
		l++;
	}
	if (m > 9)
		l = print_number((m / 10), l);
	_putchar((m % 10) + '0');
	l++;
	return (l);
}
