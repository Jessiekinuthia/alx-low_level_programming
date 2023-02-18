#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int numb = 48;

	while (numb <= 57)
	{
		putchar(numb);
		if (numb != 57)
		{
		putchar(',');
		putchar(32);
		}
		numb++;
	}
	putchar('\n');
	return (0);


}
