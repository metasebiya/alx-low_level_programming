#include "main.h"
/**
 * main - This program prints english alphabet in lower case using
 * the _putchar function.
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c < 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
