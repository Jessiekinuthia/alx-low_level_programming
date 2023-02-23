#include "main.h"

/**
 * print_diagonal - prints diagonal  line
 * @n: interger
 *
 */
void print_diagonal(int n)
{
	int m, space;

	if (n <= 0)
		_putchar('\n');
	for (m = 1; m <= n; m++)
	{
		for (space = 1; space < m; space++)
			_putchar(32);
		_putchar(92);
		_putchar('\n');
	}
}
