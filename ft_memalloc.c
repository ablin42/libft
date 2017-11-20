#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *str;

	str = (char *)malloc(sizeof(*str) * (size));
	if (str == NULL)
		return (NULL);
	ft_memset(str, '0', size);
	return (str);
}