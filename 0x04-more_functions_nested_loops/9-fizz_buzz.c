#include<stdio.h>
/**
 * main - program that prints the numbers from 1 to 100
 * But for multiples of three print Fizz
 * and for the multiples of five print Buzz
 * Return: 0.
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("Fizz Buzz ");
		else if (i % 3 == 0 % 5 != 0)
			printf("Fizz ");
		else if (i % 5 == 0 && 3 != 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}