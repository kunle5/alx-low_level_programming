#include "main.h"

/**
 * print_last_digit - prints the last digit,
 * of a number
 * @n: n is an integer
 * Return: last digit
 */

int print_last_digit(int n)
{
	ldigit = n % 10;

	if (ldigit < 0)
	{
		ldigit *= 10;
	}

	return (ldigit);
}

