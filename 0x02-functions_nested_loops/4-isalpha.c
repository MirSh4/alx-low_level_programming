#include "main.h"
/**
 * _isalpha - Shows 1 if input is letter and zero otherwise
 *
 * @c: is character
 *
 * Return: 1 for letters ,zero otheriwse.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return	(1);
	}
	return	(0);
}
