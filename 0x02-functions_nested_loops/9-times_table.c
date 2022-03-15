#include "main.h"

void times_table(void)
{
	int i,j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int r;

			r = i * j;
			_putchar(r + '0');
			_putchar(',');
		}
		_putchar('\n');
	}
	_putchar('\n');
}

int main(void)
{
  times_table();
  return (0);
}
