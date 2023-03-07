#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: contains bytes that may or may not compose parts of the string
 *
 * Return: the number of bytes that compose the length
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int length;

	length = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0' && accept[b] != s[a]; b++)
			;
		if (s[a] == accept[b])
			length++;
		if (accept[b] == '\0')
			return (length);
	}
	return (length);
}
