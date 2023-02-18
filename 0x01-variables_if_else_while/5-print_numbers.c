#include <stdio.h>

/**
 * main - prints numbers of base 10
 * Return: 0
*/
int main(void)
{
	int numb = 0;

	while (numb <= 9)
	{
		printf("%d", numb);
		numb++;
	}
	printf("\n");
	return (0);
}
