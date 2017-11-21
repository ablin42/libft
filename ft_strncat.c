/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 20:21:10 by ablin             #+#    #+#             */
/*   Updated: 2017/11/21 21:59:06 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "ft_strlen.c"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	int		j;
	int		end;

	i = 0;
	j = 0;
	end = ft_strlen(dest);
	while (i < n)
	{
		dest[end + i] = src[j];
		i++;
		j++;
		if (src[j] == '\0')
			j =  0;
	}
	return (dest);
}
