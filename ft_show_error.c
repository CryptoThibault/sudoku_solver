#include <unistd.h>

int	ft_show_error(int error)
{
	write(1, "Error\n", 6);
	return (error);
}
