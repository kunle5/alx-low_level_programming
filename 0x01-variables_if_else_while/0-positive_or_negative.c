#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - determine sign
* Description: it assigns num and executes
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	printf("%d is zero\n", n);
	else
	printf("%d is negative\n");
	return (0);
}