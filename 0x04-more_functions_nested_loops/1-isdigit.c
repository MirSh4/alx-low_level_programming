#include "main.h"

/**
 * _isdigit - says if the ascii code is digit or not
 * @c: an ascii char
 * Return: 1 if digit zero if not.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
