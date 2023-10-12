#include "main.h"
/**
 * print_sign - prints the sign of a given number
 * @m: Number to be tested
 *
 * Return: 1 if positive and greater than zero, 0 if is zero and
 * -1 if negative.
 */
int print_sign(int m)
{
	if (m > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (m < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
