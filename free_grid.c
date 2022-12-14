#include "monty.h"

/**
 * free_grid - Frees a 2 dimensional grid
 * @grid : the address of the two dimensional grid
 */

void free_grid(char **grid)
{
	int i = 0, j = 0;

	if (!grid)
		return;
	while (grid[i])
		i++;

	for (; j < i; j++)
		free(grid[j]);

	free(grid);
}
