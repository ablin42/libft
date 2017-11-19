#include <string.h>

char	*ft_strlcat(char *dst, const char *src, size_t size)
{
	int i;
	int end;
	int length;

	i = 0;
	while (dest[i] != '\0')
		i++;
	end = i;
	length = size - end - 1;
	i = 0;
	while (src[i] != '\0' && i < length)
	{
		dest[end + i] = src[i];	
		i++;
	}

	dest[end + i] = '\0';
	return (end + size);
}