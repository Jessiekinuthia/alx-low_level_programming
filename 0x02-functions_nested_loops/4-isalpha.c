#include "main.h"

/**
 * _isalpha - checks for alphabet characters
 * @c: alphabet  character
 * Return: 0 or 1
*/
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
