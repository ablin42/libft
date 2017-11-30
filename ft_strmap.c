#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	i = 0;
	if (s != NULL && f != NULL)
	{
		str = (char *)malloc(sizeof(str) * (ft_strlen(s) + 1));
		while (s[i] != '\0')
		{
			str[i] = (f)(s[i]);
			i++;
		}
		return (str);
	}
	return (NULL);
}