#include "main.h"

/**
 * print_line - prints line
 * @n: interger
 *
 */
void print_line(int n)
{
	int m = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (m <= n)
		{
			_putchar(95);
			m++;
		}
		_putchar('\n');
	}
}
