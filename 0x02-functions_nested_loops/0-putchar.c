#include "main.h"

/**
 * main - prints _putchar
 * followed by a new line
 * Description: prints _putchar
 * Return: 0 if success
 */

int main(void)
{
	char text[9] = "_putchar";

	int i = 0;

	for (i; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
