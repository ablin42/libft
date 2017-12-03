#include "libft.h"
#include <stdio.h>

int		ft_nb_words(char const *s, char c)
{
	int i;
	int		nb;

	i = 0;
	nb = 0;
	if (s[0] != c)
		nb++;
	while (s[i] != '\0')
	{
		if (s[i - 1] == c && s[i] != c)
			nb++;
		i++;
	}
	return (nb);
}

int		ft_word_length(char const *s, char c, int start)
{
	int len;

	len = 0;
	while (s[start] != c && s[start] != '\0')
	{
		start++;
		len++;
	}
	return (len);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		tmp;
	int		start;
	int		k;
	char	**split;

	i = 0;
	j = 0;
	k = 0;
	start = 0;
	tmp = ft_nb_words(s, c);
	if ((split = (char **)malloc(sizeof(*split) * (tmp + 1))) == NULL)
		return (NULL);

	while (s[i] != '\0')
	{
		k = 0;

		while (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
		{
			start = i + 1;
			i++;
		}

		if (s[i] != c && s[i - 1] == c && s[i] != '\0')
		{

			tmp = ft_word_length(s, c, start);
			if ((split[j] = (char *)malloc(sizeof(**split) * (tmp + 1))) == NULL)
				return (NULL);
			split[j][tmp] = '\0';
			while (k < tmp)
			{
				split[j][k] = s[i + k];
				ft_putchar(split[j][k]);
				k++;
			}
		j++;
		k--;
		}

		i = i + k;
		i++;
		ft_putchar('\n');
	}
	return (split);
}
