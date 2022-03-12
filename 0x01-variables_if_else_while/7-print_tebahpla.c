#include <stdio.h>

/**
 * main - prints lowercase letters,
 * in reverse
 * Description: uses only putchar
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
