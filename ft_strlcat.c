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

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	length;

	i = 0;
	dstlen = ft_strlen(dst);
	length = size - dstlen - 1;
	i = 0;
	while (src[i] != '\0' && i < length)
	{
		dst[dstlen + i] = src[i];	
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + size);
}
