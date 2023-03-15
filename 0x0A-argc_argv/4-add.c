#include "main.h"
#include <stdio.h>

/**
 * main - adds positive numbers.
 * @argc : number of arguements
 * @argv : array of arguements
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int sum, number, i, j, k;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		number = num(argv[k]);
		if (number >= 0)
		{
			sum += number;
		}
	}

	printf("%d\n", sum);
	return (0);
}

/**
 * num - converts string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int num(char *s)
{
	int a, b, c, d, len, digit;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	len = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (a < len && d == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
		c = c * 10 + digit;
		d = 1;
		if (s[a + 1] < '0' || s[a + 1] > '9')
			break;
		d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}
