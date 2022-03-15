#include "main.h"
/**
 * _isalpha - checks whether the passed character is an alphabet (A-Z or a-z)
 * @c: The character to check
 *
 * Return: 1 if c is an alphabet, otherwise Return: 0
 */
int _isalpha(int c)
{
	int i = c;

	if (i >= 97 && i <= 122)
		return (1);
	else if (i >= 65 && i <= 90)
		return (1);
	else
		return (0);
}

