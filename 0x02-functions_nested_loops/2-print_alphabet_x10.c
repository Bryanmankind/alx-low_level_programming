#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print lowercase x10.
 *
 * return: void.
 */

void print_alphabet_x10(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		int alph = 'a';

		while (alph <= 'z')
		{
			_putchar(alph++);
		}
		_putchar('\n');
		i++;
	}
}
