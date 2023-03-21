#include "main.h"
/**
 * print_sign - Prints if numbers are posotive or neg or zero
 *
 * @c: an integer
 *
 * Return: 1 if positive ,zero if zero , -1 if neg.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
