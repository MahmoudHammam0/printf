#include "main.h"
/**
 * print_add - handle %p to print address
 * @args: argument list
 * Return: number of characters printed.
 */
int print_add(va_list args)
{
	int count = 0, i, j, x;
	void *ptr;
	unsigned long int n;
	char *f = "(nil)";
	char arr[100];

	ptr = va_arg(args, void *);
	if (ptr == NULL)
	{
		for (j = 0; f[j] != '\0'; j++)
		{
			_putchar(f[j]);
		}
		return (-1);
	}
	n = (unsigned long int)ptr;
	_putchar('0');
	count++;
	_putchar('x');
	count++;
	for (i = 0; n != 0; i++)
	{
		x = n % 16;
		if (x < 10)
		{
			arr[i] = x + 48;
		}
		else
			arr[i] = x + 87;
		n /= 16;
	}
	i--;
	for ( ; i >= 0; i--)
	{
		_putchar(arr[i]);
		count++;
	}
	return (count);
}
