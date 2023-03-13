#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number whose square root
 * Return: -1 or 0
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}


/**
 *check - checker
 * @a: integer
 * @b: integer
 *
 * Return: square root
 */

int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}
