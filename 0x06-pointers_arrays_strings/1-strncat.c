#include "main.h"

/**
 *_strncat - concatenates two strings
 * @dest : pointer character
 * @src : pointer character
 * @n : number of bytes
 * Return: concatinated  pointer string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	for (; dest[a] != '\0'; a++)
		;
	for (; src[b] != '\0'; b++, a++)
	{
		if (src[b] != 0 && b < n)
			dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
