#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, initializes it with
 * a specific char
 * @size: size of the array
 * @c: char variable
 * Return: a pointer to the variable that cretes the array
 * NULL, if an error occurs
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *b;

	if (size == 0)
	{
		return (NULL);
	}
	b = (char *) malloc(sizeof(char) * size);

	if (b == NULL)
	{
		return (0);
	}
	while (i < size)
	{
		*(b + i) = c;
		i++;
	}
	*(b + i) = '\0';

	return (b);
}
