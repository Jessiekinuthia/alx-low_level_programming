#include "main.h"

/**
 * swap_int - swaps values pointed by pointers
 * @a: pointers two variable
 * @b: pointers to variable
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
