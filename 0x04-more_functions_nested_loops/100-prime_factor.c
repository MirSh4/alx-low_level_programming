#include <stdio.h>

/**
 * main - check code
 * Return: zero
 */

int main(void)
{
	long int n;
	long int max;
	long int i;

	n = 1231952;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}
	for (i = 3; i <= n; i = i + 1)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}

	if (n > 2)
		max = n;

	printf("%ld\n", max);

	return (0);
}
