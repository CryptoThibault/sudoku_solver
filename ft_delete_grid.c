#include <stdlib.h>

void	ft_delete_grid(int **grid, int size)
{
	int	y;

	y = 0;
	while (y < size)
		free(grid[y++]);
	free(grid);
}
