#include "main.h"
#include <string.h>

/**
 * rev_string - Write a function that reverses a string
 *
 * @s: input string
 * @len: length of the string
 * @mid: middle of string
 * @temp: tempural variable
 *
 * return: void
 */

void rev_string(char *s)
{
	int len = strlen(s)
	int i;

	i = len - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
