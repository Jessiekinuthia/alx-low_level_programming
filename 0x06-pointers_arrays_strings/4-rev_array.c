#include "main.h"

/**
 * reverse_array - reverses array
 * @a : pointer to an integer
 * @n : number of elements in an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;
	int iter;

	i = 0;
	b = n - 1;

	while (i < b)
	{
		iter = a[i];
		a[i] = a[b];
		a[b] = iter;
		i++;
		b--;
	}
}
