#include "main.h"

/**
 * print_last_digit - prints the last digit,
 * of a number
 * @n: n is an integer
 * Return: last digit
 */

int print_last_digit(int n)
{
	int ldigit = n % 10;

	if (n < 0)
	{
		ldigit *= -1;
	}

	return (ldigit);
}

