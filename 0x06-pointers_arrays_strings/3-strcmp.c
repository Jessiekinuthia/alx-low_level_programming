#include "main.h"

/**
 *  _strcmp - compares two strings
 *  @s1 : pointer to a string to be compared
 *  @s2 : pointer to a string to be compared
 *  Return: 0 or 1
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b;

	while (s1[a] == s2[a] && (s1[a] != '\0' || s2[a] != '\0'))
	{
		a++;
	}
	b = s1[a] - s2[a];
	return (b);
}
