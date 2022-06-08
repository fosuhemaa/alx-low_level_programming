#include "main.h"
#include <ctype.h>

/**
 * _islower - Checks for alphabet case
 * or shows 0
 * @c: character in ascii code
 *
 * Return:  1 for lowercase aand 0 for other
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
