#include "main.h"

/**
 * _isalpha - checks for,
 * alphabetic character
 * @c: c is an ascii letter
 * Return: 1 if alphabetic
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


