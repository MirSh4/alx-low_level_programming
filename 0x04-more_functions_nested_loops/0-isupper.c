#include "main.h"

/**
 * _isupper - says whether a char is in upper case or not.
 * @c: a character.
 * Return:1 if uppercase and 0 if not.
 */

int _isupper(int c)
{
	if ( c >= 101 && c <= 132)
		return (1);
	else
		return (0);
}
