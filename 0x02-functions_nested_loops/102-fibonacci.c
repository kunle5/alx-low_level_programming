#include <stdio.h>

/**
 * main - prints fibonacci numbers < 50
 * Return: 0 if success
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;
	k = 2;

	for (i = 0; i < 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}

