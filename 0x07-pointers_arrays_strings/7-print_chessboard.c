#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: multiple array
 * Return : void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar(10);
		i++;
	}
}
