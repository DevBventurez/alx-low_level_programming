#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @m: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int m)
{
	int a;

	if (m < 0)
	m = -m;

	a = m % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
