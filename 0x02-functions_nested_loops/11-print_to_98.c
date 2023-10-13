#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @m; print from this number
 */
void print_to_98(int m)
{
	int i, j;

	if (m <= 98)
	{
		for (i = m; i<= 98; i++)
		{
			if (i != 98)
				printf("%d\n", i);
		}
	} else if (m >= 98)
	{
		for (j = m; j>= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
}
	                       
