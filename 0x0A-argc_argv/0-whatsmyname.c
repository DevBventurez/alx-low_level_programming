#include <stdio.h>

/**
 * main - print its name, folllowed by a new line
 *
 * @arc: number of command line arguments.
 * #argv: array that contains the command line arg.
 *
 * Return: (0) when successful
 */
int main(int arg __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
} 
