/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 20:23:14 by ablin             #+#    #+#             */
/*   Updated: 2017/11/21 20:23:15 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	end;
	size_t	length;

	i = 0;
	while (dst[i] != '\0')
		i++;
	end = i;
	length = size - end - 1;
	i = 0;
	while (src[i] != '\0' && i < length)
	{
		dst[end + i] = src[i];	
		i++;
	}

	dst[end + i] = '\0';
	return (end + size);
}
