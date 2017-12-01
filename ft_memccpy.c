/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 20:30:32 by ablin             #+#    #+#             */
/*   Updated: 2017/12/01 02:00:40 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((char *)src)[i] != (char)c && ((char *)dst)[i] != (char)c)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
		dst++;
		if (((char *)src)[i] == (char)c)
			return (dst + 1);
	}
	return (NULL);
}
