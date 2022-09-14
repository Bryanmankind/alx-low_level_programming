#include <stdio.h>
#include "main.h"

/**
 * int _islower - picks out the olwercase
 *
 * return: void.
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

