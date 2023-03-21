#include "main.h"
/*
 * _islower - checks for lowercase letters.
 *
 * Return: always zero
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return	(1);
	}
	return	(0);
}
