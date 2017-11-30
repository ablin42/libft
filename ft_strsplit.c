/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 20:19:55 by ablin             #+#    #+#             */
/*   Updated: 2017/11/21 20:19:56 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		ft_wl(char const *str, char c)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		nb;
	int		start;
	char	**split;

	i = 0;
	j = 0;
	nb = 0;
	start = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != '\0'))
			nb++;
		i++;
	}
	if ((split = (char**)malloc(sizeof(split) * (nb + 1))) == NULL)
		return (NULL);


	i = 0;
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
			ft_putchar(split[i][j]);
			j++;
			start++;
		}
		split[i][j] = '\0';
		j = 0;
		i++;
	}
	ft_putchar('\n');
	return (split);
 }