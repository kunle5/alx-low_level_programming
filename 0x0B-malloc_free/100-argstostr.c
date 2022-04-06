#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer of an aray of char
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	str = (char *) malloc(sizeof(char) * len + 1);
	k = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
	}
	str[k] = '\n';
	k++;
	return (str);
}
