#include <stdio.h>
#include "main.h"

/**
 * int _islower - picks out the olwercase
 *
 *@c: character

 * return: 1 if lower, 0 otherwise.
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

