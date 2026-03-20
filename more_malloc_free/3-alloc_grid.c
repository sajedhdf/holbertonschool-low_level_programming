#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers
 * @w: width of the grid
 * @h: height of the grid
 *
 * Return: pointer to the grid, or NULL
 */
int **alloc_grid(int w, int h)
{
	int **g, i, j;

	if (w <= 0 || h <= 0)
		return (NULL);

	g = malloc(h * sizeof(int *));
	for (i = 0; i < h; i++)
	{
		g[i] = malloc(w * sizeof(int));
		for (j = 0; j < w; j++)
			g[i][j] = 0;
	}
	return (g);
}
