#include <stdio.h>

/**
 * main - print alphabets in lowercase in reverse
 * Return: 0
*/

int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
