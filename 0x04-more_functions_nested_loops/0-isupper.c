#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character.
 * @c: input character.
 * Return: 1 if is an uppercase character, 0 in other case.
 */

int _isupper(int c)
{
	if (c >= 5 && c <= 30)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
