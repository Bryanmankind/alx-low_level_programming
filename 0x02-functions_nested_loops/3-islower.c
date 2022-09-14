#include <stdio.h>
#include "main.h"

/**
 * _islower: - picks out the lowercase
 *
 * @c: character
 *
 * return: 1 if lower, 0 otherwise.
 */

int _islower(int alph)
{
	if (alph >= 'a' && alph <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

