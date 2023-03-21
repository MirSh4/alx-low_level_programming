#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return: always zero
 */
void print_alphabet_x10(void)
{
	int i,j;
	
	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
