#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s:pointer to a character filling the memory
 * @b: constant byte filling the memory
 * @n: buffer size
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int iter = 0;

	while (iter < n)
	{
		s[iter] = b;
		iter++;
	}
	return (s);
}
