#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int numb = 48;
	char ch = 97;

	while (numb <= 57)
	{
		putchar(numb);
		numb++;
	}
	while (ch <= 102)
	{
		putchar(ch);
		ch++;
	}
	putchar(10);
	return (0);
}
