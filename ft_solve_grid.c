int	ft_is_in_row(int *row, int size, int x);
int     ft_is_in_col(int **grid, int size, int y, int x);
int	ft_is_in_box(int **grid, int size, int y, int x);

int	ft_check_cell(int **grid, int size, int y, int x)
{
	if (ft_is_in_row(grid[y], size, x))
		return (0);
	if (ft_is_in_col(grid, size, y, x))
		return (0);
	if (ft_is_in_box(grid, size / 3, y, x))
		return (0);
	return (1);
}

int	ft_back_tracking(char **input, int **grid, int size, int *y, int *x)
{
	if (input[*y][*x] != '.' || grid[*y][*x] == size)
	{
		if (input[*y][*x] == '.')
			grid[*y][*x] = 0;
		if (!*x)
		{
			if (!*y)
				return (1);
			(*y)--;
			*x = size - 1;
		}
		else
			(*x)--;
		if (input[*y][*x] != '.' || grid[*y][*x] == size)
			return (ft_back_tracking(input, grid, size, y, x));
	}
	return (0);
}

int	ft_solve_grid(char **input, int **grid, int size)
{
	int	x;
	int	y;

	y = 0;
	x = 0;
	while (y < size)
	{
		if (input[y][x] == '.')
			while (grid[y][x] < size)
			{
				grid[y][x]++;
				if (ft_check_cell(grid, size, y, x))
					break ;
				else
					if (ft_back_tracking(input, grid, size, &y, &x))
						return (0);
			}
		if (x == size - 1)
		{
			y++;
			x = 0;
		}
		else
			x++;
	}
	return (1);
}
