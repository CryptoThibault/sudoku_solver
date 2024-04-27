int	ft_is_in_box(int **grid, int size, int y, int x)
{
	int	by;
	int	bx;
	int	py;
	int	px;

	py = 0;
	while (py < size)
	{
		px = 0;
		while (px < size)
		{
			by = y / size * size + py;
			bx = x / size * size + px;
			if (!(by == y && bx == x) && grid[y][x] == grid[by][bx])
				return (1);
			px++;
		}
		py++;
	}
	return (0);
}
