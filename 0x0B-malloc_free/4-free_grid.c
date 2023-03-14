#include "main.h"
/**
 * free_grid -  unction that frees a 2 dimensional grid
 * previously created by my alloc_grid function.
 * @grid: pointer to array
 * @height: hight of the array
 * Return: Void
 *
*/
void free_grid(int **grid, int height)
{
	if (height > 0)
	{
		int i;

		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
