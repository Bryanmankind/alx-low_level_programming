#include <stdio.h>
#include "main.h"
/**
 * print the alphabet in lowercase
 *
 * returns: void
 */

void print_alphabet(void)
{
	int alph = 'a';

	while (alph <= 'z')
	{
		_purchar(alph++);
	}
	_putchar('\n');
}
