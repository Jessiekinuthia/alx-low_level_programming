#include "main.h"
/**
* puts2 - print one char out of 2 of a string
*@str: string to print
*Return: Nothing
*/
void puts2(char *str)
{
	int b;
	char l;

	for (b = 0; str[b] != 0; b++)
	{
		if (b % 2 == 0)
		{
			l = str[b];
			_putchar(l);
		}
	}
	_putchar('\n');
}
