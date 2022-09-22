#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array a
 * @n: element of array a.
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int *p, i, rev, k;

	p = a;
	for (i = 0; i < n; i++)
		p++;
	for (j = 0; k < n / 2; k++)
	{
		rev = a[k];
		a[k] = *p;
		*p = rev;
		p--;
	}
}
