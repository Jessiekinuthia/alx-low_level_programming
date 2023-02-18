#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: 0
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 49; num2 <= 57; num2++)
		{
			for (num3 = 50; num3 <= 57; num3++)
			{
				if (num3 > num2 && num2 > num1)
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);
					if (num3 != 57 || num2 != 56 || num1 != 55)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
