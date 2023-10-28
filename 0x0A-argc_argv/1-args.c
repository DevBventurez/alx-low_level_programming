#include <stdio.h>
/**
 * main - prints the number of arguments passed into it,
 * @argc: number of command line argument.
 * @argv: array tjat contains the program command liine arg.
 * Return: (0) when successul.
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
