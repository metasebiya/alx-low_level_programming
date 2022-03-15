#include "main.h"
/**
 * print_alphabet_x10 - This function prints the alphabet 10 times
 * in lowercase, followed by a newline
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
		i++;
	}
}

