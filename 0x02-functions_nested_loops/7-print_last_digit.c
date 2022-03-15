#include "main.h"
/**
 * print_last_digit - This function prints the last digit of a number
 * @n: The integer the function is receiving
 *
 * Return: the value of the last digit of n
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;

	if (i < 0)
		i = i * -1;
	_putchar(i + '0');
	return (i);
}


