#include "libft.h"

void	showtab(char **arr)
{
	int	i;
	int	j;

	i = 0;
	while (arr[i] != '\0')
	{
		j = 0;
		while (arr[i][j])
		{
			ft_putchar(arr[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
