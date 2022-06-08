#include "main.h"
#include <stdlib.h>

/**
 * _abs - Calculates absolute value of integer
 *
 * @i: input number as integer
 *
 * Return: absolute value
 */
int_abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
