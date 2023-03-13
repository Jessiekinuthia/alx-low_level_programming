#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: prime number checker
 * Return: 1 (prime) 0 otherwise
 */
int is_prime_number(int n)
{
	return (check(n, 2));
}

/**
 * check - checker
 * @a : could be integer
 * @b : integer
 * Return: 1 (prime) 0 (otherwise)
 */
int check(int a, int b)
{
	if (b >= a && a > 1)
		return (1);
	else if (a % b == 0 || a <= 1)
		return (0);
	else
		return (check(a, b + 1));
}
