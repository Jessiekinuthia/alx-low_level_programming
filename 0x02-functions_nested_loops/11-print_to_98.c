#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98
 * @n: number less or greater than 98
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n >= 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("\n");
}
