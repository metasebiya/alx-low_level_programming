#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - This function prints all natural numbers
 * from n to 98, followed by a new line
 * @n: Starting integer to count down or up to 98
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d, ", i);
	}
	printf("\n");
}

