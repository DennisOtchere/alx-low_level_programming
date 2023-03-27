#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees a 2D array previously created
 * @grid: Pointer to the 2D array
 * @height: Number of rows in the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
