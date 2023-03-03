#include "main.h"

/**
 *_strcat - concatenates two strings
 * @dest : pointer character
 * @src : pointer character
 * Return: concatinated  pointer string dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	for (; dest[a] != '\0'; a++)
		;
	for (; src[b] != '\0'; b++, a++)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
