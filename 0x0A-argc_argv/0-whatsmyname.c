#include "main.h"
#include <stdio.h>

/**
 *main - prints its name, followed by a new line.
 *@argc: number of arguement
 *@argv: array of arguements
 *Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
