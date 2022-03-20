#includee "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: an input integer
 * Return: 0 always
 */

void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\n');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
