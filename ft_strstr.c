#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	len = 0;
	while (needle[len] != '\0')
		len++;
	while (needle[i] != '\0' && haystack[i] != '\0' && j != len)
	{
		if (needle[i] == haystack[i])
		{
			i++;
			j++;
		}
		i++;
	}
	printf("%d, %d", len, j);
	if (j == len)
		return ((char *)haystack + i - j - 1);
	return ("(null)");
}