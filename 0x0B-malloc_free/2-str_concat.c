#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: Input string one.
 * @s2: Input string two.
 *
 * Return: 0.
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, str_index = 0, str_len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		str_len++;

	str = malloc(sizeof(char) * str_len);

	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		str[str_len++] = s1[i];
	for (i = 0; s2[i]; i++)
		str[str_len++] = s2[i];

	return (str);
}
