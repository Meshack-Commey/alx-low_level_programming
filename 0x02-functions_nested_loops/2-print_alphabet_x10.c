#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10
 *
 * Description: prints 10 times
 * Return: Always(0).
 */

void print_alphabet_x10(void)
{
	int count_alphabets = 0;

	while (count_alphabets < 10)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		count_alphabets++;
		_putchar('\n');
	}
}
