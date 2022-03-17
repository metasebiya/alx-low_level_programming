#include "main.h"
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = n-1; j < i; j--)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
		_putchar('\n');
	}
}
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
