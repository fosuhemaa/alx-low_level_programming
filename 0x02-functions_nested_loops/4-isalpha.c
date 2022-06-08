#include "main.h"
/**
 * _islower - Checks for alphabet case
 * @c: character to check
 *
 * Return: 1 for lowercase and 0 for other
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
