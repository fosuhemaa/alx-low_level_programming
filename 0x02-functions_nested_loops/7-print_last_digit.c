#include "main.h"

/**
 * print_last_digit - Prints last digit of number
 *
 * @n: integer input
 *
 * Return: digit value
 */
int print_last_digit(int n)
{
	int last;
	last = n % 10;
	if (last < 0)
	last = last * -1;
	_putchar(last + '0');	
	return (last);
}
