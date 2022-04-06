#include "main.h"

/**
 * _strnpy - xopies a string
 * @dest: destination
 * @src: sourve
 * Return: destination
 * @n: nunver ofstrings to be copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i] = '\0';
	i++;
	return (dest);
}