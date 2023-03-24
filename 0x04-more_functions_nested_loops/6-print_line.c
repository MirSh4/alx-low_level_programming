#include "main.h"

/**
 * print_line - prints a line if n is more than 0.
 * @n: how long the line is.
 * Return: always zeero.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
