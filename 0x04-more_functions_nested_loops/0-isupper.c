#include "main.h"

/**
 * _isupper -checks for uppercase character
 * @c: upper or lowercase character
 * Return: 0
 *
 */
int _isupper(int c)
{
	if (c == 'A' ||  c == 'Z')
		return (1);
	else if (c == 'a' || c == 'z')
		return (0);
	return (0);

}
