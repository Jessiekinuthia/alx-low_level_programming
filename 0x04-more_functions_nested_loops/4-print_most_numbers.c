#include "main.h"

/**
 * print_most_numbers - prints numbers except two and four
 */
void print_most_numbers(void)
{
	int n = 48;

	while (n <= 57)
	{
		if (n != 50 || n != 52)
		{
			_putchar(n);
			n++;
		}
	}
	_putchar('\n');
}
