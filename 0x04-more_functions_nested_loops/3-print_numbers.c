#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * followed by a new line
 * @i: is an integer
 * Return: 0
 */

void print_numbers(void)
{
	int i;
	while (i < 10)
	{
		_putchar(i + '0');
		i++
	}
	_putchar('\n');
}
