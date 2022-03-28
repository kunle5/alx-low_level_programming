#include "main.h"

/*
 * _strcpy - copies the string pointed to by src including
 * the terminating null character (\0),
 * the buffer pointed to by dest
 * @desr: destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
