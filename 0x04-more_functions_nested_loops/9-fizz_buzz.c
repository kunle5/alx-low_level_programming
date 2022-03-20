#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Return: 0 always
 */
int main(void)
{
	int i = 0;

	for (; i <= 100; i++)
	{
		if (i % 15)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}

