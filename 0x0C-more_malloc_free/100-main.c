#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer-prints buffer in hexa
 * @buffer: the address of memory to print
 * @suze: the size of the memory to print
 *
 * Return: nothing
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		printf("0x%02x ", buffer[i]);
		if ((i + 1) % 10 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
}

/**
 * main - check the code for
 *
 * Return: Always Q.
 */
int main(void)
{
	char *p;
	int i;

	p = malloc(sizeof(char) * 100);

	for (i = 0; i < 100; i++)
	{
		p[i] = 0x62;
	}

	simple_print_buffer(p, 100);

	free(p);
	return (0);
}
