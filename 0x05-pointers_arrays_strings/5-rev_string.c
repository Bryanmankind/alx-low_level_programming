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
	int len = strlen(s);
	int mid = len / 2 ;
       char temp;
	for (int i = 0; i < mid; i++)
	{
	temp = s[i];
	s[i] = s[len - i - 1] = temp;
	}
}	
