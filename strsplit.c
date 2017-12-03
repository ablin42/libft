/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 20:19:55 by ablin             #+#    #+#             */
/*   Updated: 2017/12/03 02:21:53 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_wl(char const *str, char c)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

static int		ft_count_words(char const *s, char c)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != '\0'))
			nb++;
		i++;
	}
	return (nb);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		nb;
	int		start;
	char	**split;

	i = 0;
	j = 0;
	start = 0;
	nb = ft_count_words(s, c);
	if ((split = (char**)malloc(sizeof(split) * (nb + 1))) == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
		{
			start++;
			i++;
		}
		nb = ft_wl(&s[start], c);
		if ((split[i] = (char *)malloc(sizeof(split) * (nb + 1))) == NULL)
			return (NULL);
		while (j < nb)
		{
			split[i][j] = s[start];
			//ft_putchar(split[i][j]);
			j++;
			start++;
		}
		split[i][j] = '\0';
		//ft_putchar('\n');
		j = 0;
		i++;
	}
	return (split);
}
