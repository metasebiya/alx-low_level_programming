#include "main.h"

/**
 * main - This program prints _putchar using _putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char put_char[] = "_putchar";
	int i;

	for (i = 0; put_char[i] != '\0'; i++)
	{
		_putchar(put_char[i]);
	}
	_putchar('\n');

	return (0);
}
