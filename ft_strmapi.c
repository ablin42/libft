/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 00:53:30 by ablin             #+#    #+#             */
/*   Updated: 2017/12/01 01:58:48 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (s != NULL && f != NULL)
	{
		str = (char *)malloc(sizeof(str) * (ft_strlen(s) + 1));
		while (s[i] != '\0')
		{
			str[i] = (f)(i, s[i]);
			i++;
		}
		return (str);
	}
	return (NULL);
}
