int	ft_error_input(char **input);
int	ft_show_error(int error);
int	**ft_create_grid(char **input, int size);
int	ft_solve_grid(char **input, int **grid, int size);
void    ft_show_grid(int **grid, int size);
void	ft_delete_grid(int **grid, int size);

int	main(int ac, char **av)
{
	int	size;
	int	**grid;

	size = 9;
	if (ac != size + 1 || ft_error_input(av + 1))
		return (ft_show_error(1));
	grid = ft_create_grid(av + 1, size);
	if (!grid)
		return (ft_show_error(2));
	if (!ft_solve_grid(av + 1, grid, size))
	{
		ft_delete_grid(grid, size);
		return (ft_show_error(3));
	}
	ft_show_grid(grid, size);
	ft_delete_grid(grid, size);
	return (0);
}
