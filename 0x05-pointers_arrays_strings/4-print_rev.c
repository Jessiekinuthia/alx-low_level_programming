#include "main.h"
/**
* print_rev - prints a string in reverse
*@s: string to reverse
*Return: Nothing
*/
void print_rev(char *s)
{
	int b;

	b = 0;
	while (s[b] != '\0')
		b++;
	b--;
	for (; b >= 0; b--)
		_putchar(*(s + b));
	_putchar('\n');
}
