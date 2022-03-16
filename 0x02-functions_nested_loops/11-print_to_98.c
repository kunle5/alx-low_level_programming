#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers
 * from n to 98
 * followed by a new line
 * @n: n is an int
 */

void print_to_98(int n)
{
	int i, j;

	if (n < 99)
	{
		for (i = n; i < 99; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
				else
				{
					printf("%d\n", i);
				}
			}
		}
	}
	else if (n > 98)
	{
		for (j = n; j > 98; j--)
		{
			if (j != 98)
			{
				printf("%d, ", j);
				else

				{
					printf("%d\n", j);
				}
			}
		}
	}
}

