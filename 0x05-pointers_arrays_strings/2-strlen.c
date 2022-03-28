#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: variable
 * Return: the result of the code
 */
int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		len++;
	}
	return (len);
}
