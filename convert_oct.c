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
	int octalNum[100];

	while (n != 0)
	{
		octalNum[i] = n % 8;
		n = n / 8;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
		print_number(octalNum[j], 0);

	return (i);
}
