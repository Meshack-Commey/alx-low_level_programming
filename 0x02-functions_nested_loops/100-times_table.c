#include "main.h"

/**
 * times_table - prints the n times table
 *
 *Description: prints the n times table
 * Return: Always (0).
 */

void print_times_table(int n)
{
	int i, j, product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{ 
			if (n > 15 || n < 0)
			{
				break;
			}
			product = i * j;
			_putchar(',');
			_putchar(' ');
			if (product >= 10)
			{
				_putchar(product / 10 + 48);
				_putchar(product % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(product + 48);
			}

		}
		_putchar('\n');
	}
}
