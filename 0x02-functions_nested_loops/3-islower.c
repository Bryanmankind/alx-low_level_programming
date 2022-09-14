#include <stdio.h>
#include "main.h"

/**
 * _islower - print alphabet out form a word.
 *
 * @c: character
 *
 * Return: 1 if lower, 0 if uppercase.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

