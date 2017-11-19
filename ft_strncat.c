#include <string.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int i;
	int end;

	i = 0;
	end = 0;
	while (dest[i] != '\0')
		i++;
	end = i;
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[end + i] = src[i];	
		i++;
	}

	dest[end + i] = '\0';
	return (dest);
}