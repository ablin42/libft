#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (str);
	while (i < n)
	{
		((char*)str)[i] = c;
		i++;
	}

	return (str);
}