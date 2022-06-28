#include <stdlib.h>

/**
 * free_grid - A function that frees a 2D array memory
 * allocation
 * @grid: The 2D array
 * @height: The height of the array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
