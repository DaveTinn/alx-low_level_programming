#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: NULL, if width or height is negative or 0
 */
int **alloc_grid(int width, int height)
{
	int d;
	int e;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < height; d++)
	{
		grid[d] = malloc(sizeof(int) * width);
		if (grid[d] == NULL)
		{
			free(grid);
			for (e = 0; e <= height; e++)
				free(grid[e]);
			return (NULL);
		}
		for (e = 0; e < width; e++)
			grid[d][e] = 0;
	}
	return (grid);
}
