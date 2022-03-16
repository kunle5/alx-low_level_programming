#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet,
 * in lowercase 10x,
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
}

