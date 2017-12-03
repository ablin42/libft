/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 20:19:55 by ablin             #+#    #+#             */
/*   Updated: 2017/12/02 23:33:58 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_forward(char const *s)
{
	int		i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	return (i);
}

static int	ft_backward(char const *s)
{
	int		end;

	end = ft_strlen(s) - 1;
	while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
		end--;
	return (end);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		end;
	char	*trim;

	j = 0;
	end = ft_strlen(s) - 1;
	trim = (char *)malloc(sizeof(trim) * (ft_strlen(s) + 1));
	if (trim == NULL)
		return (NULL);
	i = ft_forward(s);
	if (i == end)
		return ("");
	end = ft_backward(s);
	if (end == 0)
		return ("");
	while (i <= end)
	{
		trim[j] = s[i];
		i++;
		j++;
	}
	trim[j] = '\0';
	return (trim);
}
