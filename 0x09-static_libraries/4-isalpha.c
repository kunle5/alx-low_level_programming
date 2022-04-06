#include "main.h"

/**
 * _isalpha - if true, returns lowercase/uppercase letter, zero oherwise
 * @c: variable
 * Return: 1, if true. 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z' ) || (c >= 'A' && c <= 'Z'));
}
