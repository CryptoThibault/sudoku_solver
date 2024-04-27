int	ft_is_in_row(int *row, int size, int x)
{
	int	cell;
	int	px;

	cell = row[x];
	px = x;
	while (x--)
		if (cell == row[x])
			return (1);
	while(px++ < size - 1)
		if (row[px] != 0 && cell == row[px])
			return (1);
	return (0);
}

int     ft_is_in_col(int **grid, int size, int y, int x)
{
	int	cell;
	int	py;

	cell = grid[y][x];
	py = y;
	while (y--)
		if (cell == grid[y][x])
			return (1);
	while(py++ < size - 1)
		if (grid[py][x] != 0 && cell == grid[py][x])
			return (1);
	return (0);
}
