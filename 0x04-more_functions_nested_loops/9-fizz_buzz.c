#include <stdio.h>

/**
 * main - print numbers from 0 to 10 but with a twist.
 * Return: always zero.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 3)
			printf(" Fizz");
		else if (i % 5)
			printf(" Buzz");
		else if (i == 1)
			printf("%d", i);
		else
			printf(" %d", i);
	}
	printf("\n");

	return (0);
}
