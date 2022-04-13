#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers to 98
 * @n: first parameter
 *
 * Description: prints all num to 98
 * Return: Always (0).
 */

void print_to_98(int n)
{
	
	if (n < 98)
	{
		while (n <= 98)
		{
			_putchar("%d", n)

			if (n != 98)
			{
				_putchar(", ");
				
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			_putchar("%d", n)
			
			if (n != 98)
			{
				_putchar(',');
			}
			n--;
		}
	}
	else
	{
		_putchar("98")
	}
	_putchar("\n")
		
	return;
}
