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
	int len = 0;
	char temp;
	int i = 0;

	while (s[i++])
		len++;

	for ( i = 0; i >= len/2; i++)
	{ temp = s[i];
	s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
