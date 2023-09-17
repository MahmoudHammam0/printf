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
	int oct[100], i;

	while (n != 0)
	{
		oct[l] = n % 8;
		n = n / 8;
		l++;
	}

	for (i = l - 1; i >= 0; i--)
		print_number(oct[i], 0);

	return (l);
}
