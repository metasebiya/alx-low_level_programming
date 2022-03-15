#include "main.h"
/**
 * print_alphabet - This function prints the alphabet in lowercase
 * ten times
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

