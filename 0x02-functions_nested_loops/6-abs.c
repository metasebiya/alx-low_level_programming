#include "main.h"
/**
 * _abs - returns the absolute value of an integer
 * @i: The integer to check
 *
 * Return: an integer which is the absolute value of i
 */
int _abs(int i)
{
	int j = i;

	if (j >= 0)
		return (j);
	else
		return (j * -1);
}

