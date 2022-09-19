#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 *
 * @s: input string to be printed
 * Return: no return
 */

void print_rev(char *s)
{
	int str = 0, i;

	while (s[i++])
		str++;
	
	for (i = str - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

