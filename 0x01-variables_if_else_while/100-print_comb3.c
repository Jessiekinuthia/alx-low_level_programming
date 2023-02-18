#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int numb_1;
	int numb_2;

	for (numb_1 = 48; numb_1 <= 57; numb_1++)
	{
		for (numb_2 = 49; numb_2 <= 57; numb_2++)
		{
			if (numb_2 > numb_1)
			{
				putchar(numb_1);
				putchar(numb_2);
				if (numb_1 != 56 || numb_2 != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}

	}
	putchar(10);
	return (0);
}
