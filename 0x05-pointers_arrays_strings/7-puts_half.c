#include "main.h"

/**
 * puts_half - function that prints half of a string.
 * if odd len, n =(length_of_the_string - 1)/2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n, count;

	count = 0;

	for (a = 0; str[a] != '\0'; a++)
		count++;

	n = (count / 2);

	if ((count % 2) == 1)
		n = ((count + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar ('\n');
}

