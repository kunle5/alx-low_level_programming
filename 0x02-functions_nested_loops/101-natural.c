#include <stdio.h>

/**
 * main -prints the multiples of 3 or 5 below 1024
 * Return: 0 if success
 */

int main(void)
{
	int i;
	unsigned long int sum1, sum2, sum3;

	sum1 = 0;
	sum2 = 0;
	sum3 = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			sum2 += i;
		}
	else if ((i % 5) == 0)
	{
		sum 1 += i;
	}
	}
	sum3 = sum1 + sum2;
	printf("%lu\n", sum3);
	return (0);
}

