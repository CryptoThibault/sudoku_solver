int	ft_strlen(char *str);

int     ft_error_input(char **input)
{
	int	i;
	int	j;

	i = 0;
	while (input[i])
	{
		if (ft_strlen(input[i]) != 9)
			return (1);
		j = 0;
		while (input[j])
		{
			if (!((input[i][j] >= '1' && input[i][j] <= '9')
				|| input[i][j] == '.'))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
