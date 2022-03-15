#include "main.h"
/**
 * main - prints english alphabet in lower case 10 times
 * Return: 0 Always (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c;

		for (c = 'a'; c < 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
		i++;
	}
}

int main(void)
{
	print_alphabet_x10();
	return (0);
}
