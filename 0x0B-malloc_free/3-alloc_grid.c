#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array.
 * @length: length of array.
 *
 * Return: 0.
 */

int **alloc_grid(int width, int height)
{
	int **D;
	int hgt_index, width_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	D = malloc(sizeof(int *) * height);

	if (D == NULL)
		return NULL;

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		D[hgt_index] = malloc(sizeof(int) * width);
	if (D[hgt_index] == NULL)
	{
		for (; hgt_index >= 0; hgt_index--)
			free(D[hgt_index]);
		free(D);
		return (NULL);
	}
	}
	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			D[hgt_index][wid_index] = 0;
	}
	return (D);
}
