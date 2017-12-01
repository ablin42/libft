/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 00:53:07 by ablin             #+#    #+#             */
/*   Updated: 2017/12/01 00:53:14 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
