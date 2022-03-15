#include "main.h"
/**
 * _islower - checks whether the passed character is a lowercase letter
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, otherwise Return: 0
 */
int _islower(int c)
{
	int i;

	i = c;

	if (i >= 97 && i <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


