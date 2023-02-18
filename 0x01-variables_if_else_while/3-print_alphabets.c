#include <stdio.h>

/**
 * main - print alphabets in lowercase
 * Return: 0
*/

int main(void)
{
	char n = 'a';
	char z = 'A';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	while (z <= 'Z')
	{
		putchar(z);
		z++;
	}
	putchar('\n');
	return (0);
}
