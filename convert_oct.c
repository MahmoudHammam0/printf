#include "main.h"

/**
 * octal - converts decimal to octal
 * @n: decimal int
 * @l: length
 *
 * Return: length of the number
 */
int octal(int n, int l)
{
	if (n == 0)
	{
		return (l);
	}

	int a, mod;

	if (n > 0)
	{
		a = n / 8;
		mod = n % 8;
		l++;
	}
	else
	{
		a = (n / 8) + 1;
		mod = n % 8 + 8;
	}

	l = octal(a, l);

	print_number(mod, 0);
	return (l);
}
