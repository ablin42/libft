#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && ((char *)str1)[i] == ((char *)str2)[i])
			i++;
	return (((char *)str1)[i] - ((char *)str2)[i]);
}