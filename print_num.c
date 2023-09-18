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
/**
 * print_unsig - print unsigned ints
 * @n: unsigned int to be printed
 * Return: number of characters printed
 */
int print_unsig(unsigned int n)
{
	int d = 1, v = 1, i;
	int count = 0;
	char *s;
	unsigned int num;

	num = n;
	while (num / d > 9)
	{
		v++;
		d *= 10;
	}
	s = malloc(sizeof(char) * (v + 1));
	if (s == NULL)
		return (-1);
	for (i = 0; i < v; i++)
	{
		s[i] = (num / d) + 48;
		count++;
		num %= d;
		d /= 10;
	}
	s[i] = '\0';
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	free(s);
	return (count);
}
