#include "main.h"
/**
 * print_last_digit - Prints last digit.
 *
 * @i: is an integer
 *
 * Return: the last digit
 */
int print_last_digit(int i)
{
	int l;

	l = i % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
