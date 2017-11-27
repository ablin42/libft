/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 20:19:55 by ablin             #+#    #+#             */
/*   Updated: 2017/11/21 20:19:56 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		end;
	char	*trim;

	i = 0;
	j = 0;
	end = ft_strlen(s);
	trim = (char *)malloc(sizeof(trim) * (ft_strlen(s) + 1));
	if (trim == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
		end--;
	end = end * -1;
	end = ft_strlen(s) - i - end;
	while (s[i] != '\0' && j < end)
	{
		trim[j] = s[i];
		i++;
		j++;
	}
	trim[j] = '\0';
	return (trim);
}