#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: array a
 * @n: element of array a.
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int *p, i, rev, j;

	p = a;
	for (i = 0; i < n; i++)
		p++;
	for (j = 0; j < i / 2; j++)
	{
		rev = a[j];
		a[j] = *p;
		*p = rev;
		p--;
	}
}
