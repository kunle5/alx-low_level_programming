#include "main.h"

/**
 * print_alphabet - prints the alphabets,
 * in lowercase,
 * followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

