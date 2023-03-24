#include "main.h"

/**
 * fizz_buzz - prints all numbers from 0 to 10 followed by a new line but with a twist.
 * Return: always zero.
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3)
			printf("Fizz ");
		else if (i % 5)
			printf("Buzz ");
		else
			printf("%d " , i);
	}
}
