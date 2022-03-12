#include <stdio.h>

/**
 * main - Prints all single digit numbers with putchar function
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n);

	putchar('\n');

	return (0);
}
